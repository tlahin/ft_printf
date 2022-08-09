//header

#include "../includes/ft_printf.h"

int	ft_print_oct(unsigned int num)
{
	int	print_length;

	print_length = 0;
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_oct(num);
	return (print_length);
}
