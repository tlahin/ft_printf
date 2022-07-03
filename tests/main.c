
#include <stdio.h>
#include "../includes/ft_printf.h"

int main(void)
{
	char	c;
	char	*str;

	c = 'A';
	str = "ABC";
	ft_printf("\nft_Test: Hello %%!\n");
	printf("Test   : Hello %%!\n\n");
	ft_printf("ft_Test: %c\n", c);
	printf("Test   : %c\n\n", c);
	ft_printf("ft_Test: %s\n", str);
	printf("Test   : %s\n\n", str);
	return (1);
}
