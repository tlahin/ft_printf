/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:38:09 by tlahin            #+#    #+#             */
/*   Updated: 2022/09/17 17:38:11 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long double	rounding(long double number, int prec)
{
	long double	rounding;
	int			i;

	i = 0;
	rounding = 0.5;
	if (number < 0)
		rounding *= -1;
	while (i++ < prec)
		rounding /= 10.0;
	return (rounding);
}

static char	*joining(char *whole, char *dec_part)
{
	char	*joint;

	joint = ft_strjoin(whole, dec_part);
	free(whole);
	free(dec_part);
	return (joint);
}

static long double	ftoa_helper_1(long double number, int prec)
{
	if (prec >= 0)
		number = rounding(number, prec);
	else
		prec = 0;
	if (number < 0)
		number *= -1;
	return (number);
}

static char	ftoa_helper_2(char *dec_part, char dot, int prec, int i)
{
	dec_part = ft_strnew(prec + 1);
	if (dot && prec > 0)
		dec_part[i++] = '.';
	else
		dec_part[i++] = '\0';
	return (dec_part[i]);
}

char	*ft_ftoa(long double number, int prec, char dot)
{
	char				*joint;
	char				*whole;
	char				*dec_part;
	unsigned long long	dec;
	int					i;

	dec_part = "";
	i = 0;
	if (prec == -1)
		prec = 6;
	number = ftoa_helper_1(number, prec);
	whole = ft_itoa_uintmax(number);
	dec = number;
	if (prec > 0)
		number -= dec;
	dec_part[i] = ftoa_helper_2(dec_part, dot, prec, i);
	while (prec-- > 0)
	{
		number *= 10;
		dec = number;
		number -= dec;
		dec_part[i++] = dec + '0';
	}
	joint = joining(whole, dec_part);
	return (joint);
}
