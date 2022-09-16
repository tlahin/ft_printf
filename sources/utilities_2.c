/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:25:13 by tlahin            #+#    #+#             */
/*   Updated: 2022/09/15 12:25:14 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen_max(uintmax_t number)
{
	int	len;

	len = 1;
	while ((number /= 10) > 0)
		len++;
	return (len);
}

int	ft_number_size(intmax_t number)
{
	int	len;

	if (number < 0)
		number *= -1;
	len = 1;
	while ((number /= 10) > 0)
		len++;
	return (len);
}

int	ft_number_size_base(intmax_t number, int base)
{
	int	len;

	len = 0;
	len += (number < 0);
	while (number)
	{
		number /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa_uintmax(uintmax_t n)
{
	char	*new;
	int		len;

	len = ft_intlen_max(n) + 1;
	new = ft_strnew(len + 1);
	if (!new)
		return (NULL);
	new[len] = '\0';
	len--;
	while (n >= 10)
	{
		new[--len] = (char)(n % 10 + '0');
		n /= 10;
	}
	new[--len] = (char)(n + '0');
	return (new);
}

char	*ft_itoa_base(intmax_t number, int base)
{
	char	*new;
	int		j;

	j = ft_number_size_base(number, base);
	new = (char*)malloc(sizeof(char) * j + 1);
	if (!new)
		return (NULL);
	if (number < 0)
		new[0] = '-';
	new[j] = '\0';
	while (j--)
	{
		new[j] = (number % base < 10) ? number % base + '0' : number % base + 'a' - 10;
		number /= base;
	}
	return (new);
}
