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
	if (format == 'c')
	{
		ft_printchar(va_arg(args, int));
	}
	else if (format == 's')
	{
		ft_putstr(va_arg(args, char *));
	}
	else if (format == 'p')
	{
		ft_print_ptr(va_arg(args, unsigned long long));
	}
	else if (format == 'd')
	{
		ft_putnbr(va_arg(args, int));
	}
	else if (format == 'i')
	{
		ft_putnbr(va_arg(args, int));
	}
	else
	{
		ft_putchar('%');
	}
	return (0);
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
