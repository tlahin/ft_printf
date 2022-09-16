/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:31:26 by tlahin            #+#    #+#             */
/*   Updated: 2022/09/15 12:31:28 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_data	*negativity(t_data *info, intmax_t number)
{
	if (number >= 0)
	{
		if (info->prefix[1] == '+')
			info->get_plus = '+';
		else if (info->prefix[2] == ' ')
			info->get_plus = ' ';
		else
			info->get_plus = '\0';
	}
	if (number == 0)
		info->s_len += 1;
	else
		info->s_len += ft_number_size(number);
	return (info);
}

void	put_simple_di(t_data *info, intmax_t number)
{
	if (number == 0 && info->prec == 0)
	{
		if (info->get_plus != '\0')
			info->width--;
		if (info->prefix[0] != '-')
			print_alternative(info, info->width, ' ');
		if (info->prefix[1] == '+')
			print_alternative(info, 1, '+');
		else if (info->prefix[2] == ' ')
			print_alternative(info, 1, ' ');
		if (info->prefix[1] == '-')
			print_alternative(info, info->width, ' ');
	}
}

void	put_di(t_data *info, int zero, bool negative)
{
	if (info->prefix[0] != '-')
		print_alternative(info, info->width - zero - info->s_len, ' ');
	if (negative)
		write(1, "-", 1);
	if (info->get_plus != '\0')
	{
		write(1, &info->get_plus, 1);
	}
	print_alternative(info, zero, '0');
}

static int	get_zero(t_data *info, bool negative)
{
	int			zero;

	zero = 0;
	if (info->prefix[4] == '0' && info->prefix[0] != '-')
	{
		if (info->prec >= 0 && info->prec >= info->s_len)
			zero = info->prec - info->s_len;
		else if (info->prec >= 0 && info->prec < info->s_len)
			zero = 0;
		else if (info->prec == -1)
		{
			zero = info->width - info->s_len;
			if (negative)
				zero -= 1;
			if (info->prefix[2] == ' ' && info->prefix[1] != '+' && !negative)
				zero -= 1;
		}
		if (info->prefix[1] == '+' && !negative && info->prec == -1)
			zero -= 1;
	}
	else if (info->prefix[0] == '-' || info->prefix[4] != '0')
	{
		if (info->prec > 0 && info->prec > info->s_len)
			zero = info->prec - info->s_len;
	}
	return (zero);
}

t_data	*print_integer(t_data *info)
{
	long long	number;
	int			zero;
	bool		negative;

	number = cast_di(info);
	negativity(info, number);
	if (number == 0 && info->prec == 0)
	{
		put_simple_di(info, number);
		return (info);
	}
	//is number negative?
	//number * -1 : 1 if negative and number != (-9223372036854775807 - 1)
	zero = get_zero(info, negative);
	if (info->get_plus != '\0' || negative)
		info->s_len += 1;
	put_di(info, zero, negative);
	if (number == -9223372036854775807 - 1)
		max(info);
	else
		putnumbermax(number);
	if (info->prefix[0] == '-')
		print_alternative(info, info->width - zero - info->s_len, ' ');
	info->len += info->s_len;
	return (info);
}
