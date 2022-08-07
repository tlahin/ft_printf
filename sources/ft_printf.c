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

int	ft_types(va_list args, const char format)
{
	int		print_length;

	print_length = 0;

	if (format == 'c')
		print_length = ft_printchar(va_arg(args, int)); //make print char return print len
	else if (format == 's')
		print_length = ft_putstr(va_arg(args, char *)); //print str func
	else if (format == 'p')
		print_length = ft_print_ptr(va_arg(args, unsigned long long)); //return print length
	else if (format == 'd' || format == 'i')
		print_length = ft_printnbr(va_arg(args, int)); //print nbr func
	else if (format == 'o')
		print_length = ft_print_oct(va_args(args, unsigned int)); //print oct func
	else if (format == 'u')
		print_length = ft_printf_uint(va_args(args, unsigned int)); //todo
	else if (format == 'x' || format == 'X')
		print_length = ft_print_hex(va_arg(args, unsigned int), format); //todo
	else
		print_length = ft_printprecent();
	return (0);

	//print length!!
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*ptr;

	va_start(args, format);
	ptr = format;
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			ft_types(args, *ptr);
		}
		else
		{
			ft_printchar(*ptr);
		}
		ptr++;
	}
	va_end(args);
	return (0);
}
