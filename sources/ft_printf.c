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
	switch (format)
	{
		case 'c':
			ft_printchar(va_arg(args, int));
			break;
		case 's':
			ft_putstr(va_arg(args, char *));
			break;
		case '%':
			ft_putchar('%');
			break;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*ptr;
	int			len;

	len = 0;

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
