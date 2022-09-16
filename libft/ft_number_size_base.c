//hdear

#include "libft.h"

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