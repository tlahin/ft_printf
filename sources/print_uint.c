//header

#include "ft_printf.h"

int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int num)
{
	char	*str;
	int	len;

	len = ft_num_len(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = num % 10 + 48;
		num = num / 10;
		len--;
	}
	return (str);
}

int	ft_print_uint(unsigned int num)
{
	int	print_length;
	char	*str;

	print_length = 0;
	if (num == 0)
		print_length += write(1, "0", 1);
	else
	{
		str = ft_uitoa(num);
		print_length += ft_print_str(str);
	}	
	return (print_length);
}
