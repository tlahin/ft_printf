/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:25:04 by tlahin            #+#    #+#             */
/*   Updated: 2022/09/15 12:25:06 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_simple_di(t_data *info, intmax_t number)
{
	if (number == 0 && info->prec == 0)
	{
		if (info->get_plus != '\0')
			info->width--;
		if (info->prefix[0] != '-')
			print_alternative(info, ' ', info->width);
		if (info->prefix[1] == '+')
			print_alternative(info, '+', 1);
		else if (info->prefix[2] == ' ')
			print_alternative(info, ' ', 1);
		if (info->prefix[1] == '-')
			print_alternative(info, ' ', info->width);
	}
}

void	put_di(t_data *info, int zero)
{
	if (info->prefix[0] != '-')
		print_alternative(info, ' ', info->width - zero - info->s_len);
	if (info->nega)
		write(1, "-", 1);
	if (info->get_plus != '\0')
	{
		write(1, &info->get_plus, 1);
	}
	print_alternative(info, '0', zero);
}

t_data	*reset_data(t_data *info)
{
	info->nega = false;
	info->get_plus = '\0';
	info->specifier = '\0';
	info->prec = -1;
	info->width = 0;
	info->prefix[0] = '\0';
	info->prefix[1] = '\0';
	info->prefix[2] = '\0';
	info->prefix[3] = '\0';
	info->prefix[4] = '\0';
	info->prefix[5] = '\0';
	info->length_flags[0] = '\0';
	info->length_flags[1] = '\0';
	info->length_flags[2] = '\0';
	return (info);
}

t_data	*init_data(t_data *info)
{
	info->i = 0;
	info->len = 0;
	info->padding = 0;
	info->s_len = 0;
	info->format_flags = "#0-+ ";
	info->arg_flags = "lhL";
	info->spec_flags = "cspdiouxXfF%";
	info->hex_chars = "0123456789abcdef";
	info->c_fmt = (char *)info->fmt;
	info->srch_fmt = (char *)info->fmt;
	return (info);
}
