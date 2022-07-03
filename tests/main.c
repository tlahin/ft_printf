
#include <stdio.h>
#include "../includes/ft_printf.h"

int main(void)
{
	char	c;
	char	*str;
	int		i;
	char	*ptr;

	c = 'A';
	str = "ABC";
	i = 42;
	ptr = str;
	ft_printf("\nft_Test: Hello %%!\n");
	printf("Test   : Hello %%!\n\n");
	ft_printf("ft_Test: %c\n", c);
	printf("Test   : %c\n\n", c);
	ft_printf("ft_Test: %s\n", str);
	printf("Test   : %s\n\n", str);
	ft_printf("ft_Test: %d\n", i);
	printf("Test   : %d\n\n", i);
	ft_printf("ft_Test: %i\n", i);
	printf("Test   : %i\n\n", i);
	ft_printf("ft_Test: %p\n", &ptr);
	printf("Test   : %p\n\n", &ptr);
	return (1);
}
