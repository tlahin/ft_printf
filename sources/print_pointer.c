/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:31:55 by tlahin            #+#    #+#             */
/*   Updated: 2022/09/15 12:31:57 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	do_p(t_data *info)
{
	int		zeroes;

	zeroes = 0;
	if (info->prefix[4] != '0')
	{
		if (info->prec > 0 && info->prec > info->s_len)
			zeroes = info->prec - info->s_len;
		else if (info->prec == -1 && info->width > info->s_len)
			zeroes = 0;
	}
	else if (info->prefix[4] == '0')
	{
		if (info->width > info->s_len && info->prec == -1)
			zeroes = info->width - info->s_len - 2;
		else if (info->width > info->s_len && info->prec > 0)
			zeroes = info->prec - info->s_len;
	}
	return (zeroes);
}

static t_data	*handle_str(t_data *info, char *tmp)
{
	if (info->prec == 0)
	{
		ft_putstr("\0");
		info->len--;
	}
	else
		ft_putstr(tmp);
	return (info);
}

t_data	*print_pointer(t_data *info)
{
	char		*tmp;
	uintmax_t	number;
	int			zero;

	zero = 0;
	number = (unsigned long)va_arg(info->args, unsigned long int);
	number = (uintmax_t)number;
	tmp = number == 0 ? ft_strdup("0") : ft_itoa_base(number, 16);
	info->s_len = ft_strlen(tmp);
	zero = do_p(info);
	if (info->prefix[0] != '-')
		print_alternative(info, ' ', info->width - info->s_len - zero - 2);
	write(1, "0x", 2);
	print_alternative(info, '0', zero);
	info->len += 2;
	handle_str(info, tmp);
	info->len += info->s_len;
	if (info->prefix[0] == '-')
		print_alternative(info, ' ', info->width - info->s_len - zero - 2);
	free(tmp);
	return (info);
}
