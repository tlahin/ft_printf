//header

#include "libft.h"

int	ft_number_size(intmax_t number)
{
	int	len;

	if (number < 0)
		number *= -1;
	len = 1;
	number = number / 10;
	while (number > 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}