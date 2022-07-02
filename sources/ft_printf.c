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

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_types(va_list args, const char format)
{
	if (format == 'c')
		ft_printchar(va_arg(args, int));
	else if (format == '%')
		ft_printchar('%');
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
			ft_types(args, *ptr);
			ptr++;
		}
		else
			ft_printchar(*ptr);
		ptr++;
	}
	va_end(args);
	return (0);
}
