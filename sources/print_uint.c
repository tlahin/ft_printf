//header

#include "ft_printf.h"

char	*ft_uitoa(unsigned int num)
{
	char	*num;
	int	len;

	len = ft_num_len(num);
	number = (char *)malloc(sizeof(char) * 	(len + 1));
	if (!num)
		return (-1);
	num[len] = '\0';
	while (num != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_print_uint(unsigned int num)
{
	int	print_length;

	print_length = 0;
	if (num == 0)
		print_length += write(1, "0", 1);
	else
	{
		num = ft_uitoa(num);
		print_length += ft_printstr(num);
	}	
	return (print_length);
}
