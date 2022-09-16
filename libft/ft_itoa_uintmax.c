//header

#include "libft.h"

char	*ft_itoa_uintmax(uintmax_t number)
{
	char			*new;
	int				len;

	len = ft_intlen_max(number) + 1;
	if (!(new = ft_strnew(len + 1)))
		return (NULL);
	new[len] = '\0';
	len--;
	while (number >= 10)
	{
		new[--len] = (char)(number % 10 + '0');
		number /= 10;
	}
	new[--len] = (char)(number + '0');
	return (new);
}