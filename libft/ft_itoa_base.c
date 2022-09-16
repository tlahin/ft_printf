//hdear

#include "libft.h"

char	*ft_itoa_base(intmax_t number, int base)
{
	char	*new;
	int		j;

	j = ft_number_size_base(number, base);
	new = (char *)malloc(sizeof(char) * j + 1);
	if (!new)
		return (NULL);
	if (number < 0)
		new[0] = '-';
	new[j] = '\0';
	while (j--)
	{
		if ((number % base) < 10)
			new[j] = number % base + '0';
		else
			new[j] = number % base + 'a' - 10;
		number /= base;
	}
	return (new);
}