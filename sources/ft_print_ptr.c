//Header

#include "../includes/ft_printf.h"

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	if (ptr == 0)
		write(1, "0", 1);	
	else
	{
		ft_put_ptr(ptr);
	}
	return(0);
}
