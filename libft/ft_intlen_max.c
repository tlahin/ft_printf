//header

#include "libft.h"

int		ft_intlen_max(uintmax_t nbr)
{
	int len;

	len = 1;
	while ((nbr /= 10) > 0)
		len++;
	return (len);
}