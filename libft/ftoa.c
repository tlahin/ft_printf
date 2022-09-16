//header

#include "libft.h"

static long double	rounding(long double number, int prec)
{
	long double rounding;
	int			i;

	i = 0;
	rounding = 0.5;
	if (number < 0)
		rounding *= -1;
	while (i++ < prec)
		rounding /= 10.0;
	return (rounding);
}

static char			*joining(char *whole, char *dec_part)
{
	char *joint;

	joint = ft_strjoin(whole, dec_part);
	free(whole);
	free(dec_part);
	return (joint);
}

char    *ft_ftoa(long double number, int prec, char dot)
{
	char				*joint;
	char				*whole;
	char				*dec_part;
	unsigned long long	dec;
	int					i;

	i = 0;
	prec = prec == -1 ? 6 : prec;
	number += prec >= 0 ? rounding(number, prec) : 0;
	number < 0 ? number *= -1 : number * 1;
	whole = ft_itoa_uintmax(number);
	dec = number;
	number = prec > 0 ? number - dec : 0;
	dec_part = ft_strnew(prec + 1);
	dec_part[i++] = (dot && prec > 0) ? '.' : '\0';
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