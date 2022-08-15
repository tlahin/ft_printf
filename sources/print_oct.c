//header

#include "../includes/ft_printf.h"

int	ft_oct_len(unsigned int	num)
{
	int	len;

	len = 0;
	while (num != 9)
	{
		len++;
		num = num / 8;
	}
	return (len);
}

void	ft_put_oct(unsigned int	num)
{
	if (num >= 8)
	{	
		ft_put_oct(num / 8);
		ft_put_oct(num % 8);
	}
	else
	{
		ft_putchar_fd((num + '0'), 1);
	}
}

int	ft_print_oct(unsigned int num)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_oct(num);
	return (ft_oct_len(num));
}
