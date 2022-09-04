/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:43:16 by tlahin            #+#    #+#             */
/*   Updated: 2022/06/27 12:43:18 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_next_specifier(const char *format, va_list ap)
{
	int	print_length;
	t_data	*info;
	int	len;

	print_length = 0;
	len = 0;
	if (*format++ == '%')
	{
		init_data(info);
		len = prefix(format, info);
		while (len--)
			format++;
		print(info, ap);
	}
	else
	{
		write(1, &format, 1);
	}
	return (print_length);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int		print_length;
	
	print_length = 0;
	va_start(ap, format);	
	while (*format)
	{
		print_length += get_next_specifier(format, ap);
		format++;
	}
	va_end(ap);
	return (print_length);
}
