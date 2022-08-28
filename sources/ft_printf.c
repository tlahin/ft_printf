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

void	ft_flags(va_list args, const char format, t_flags *info)
{
	while (ft_strchr(FLAGS, *ptr))
	{
		if (format == '#')
			info->hash = true;
		if (format == '0')
			info->zero = true;
		if (format == '-')
			info->dash = true;
		if (format == ' ')
			info->space = true;
		if (format == '+')
			info->plus = true;
	}
}
int	ft_types(va_list args, const char format)
{
	int		print_length;

	print_length = 0;

	if (format == 'c')
		print_length = ft_print_char(va_arg(args, int));
	else if (format == 's')
		print_length = ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		print_length = ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length = ft_print_nbr(va_arg(args, int));
	else if (format == 'o')
		print_length = ft_print_oct(va_arg(args, unsigned int));
	else if (format == 'u')
		print_length = ft_print_uint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length = ft_print_hex(va_arg(args, unsigned int), format);
	else
		print_length = ft_print_precent();
	return (print_length);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*ptr;
	int		print_length;
	t_flags		*info;

	va_start(args, format);
	ptr = format;
	print_length = 0;
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			ft_flags(args, *ptr, info);
			print_length += ft_types(args, *ptr);
		}
		else
		{
			print_length += ft_print_char(*ptr);
		}
		ptr++;
	}
	va_end(args);
	return (print_length);
}
