
#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	//int	real;
	int mine;

	printf("\n-----------\n");
	printf("%%lu -42\n");
	//real = printf("%lu", -42);
	printf("\n");
	mine = ft_printf("%lu", -42);
	printf("\n\n");
	//printf("OG_len: %d\n", real);
	printf("FT_len: %d\n", mine);

	printf("\n-----------\n");

	printf("%% hZ\n");
	//real = printf("% hZ");
	printf("\n");
	mine = ft_printf("% hZ");
	printf("\n\n");
	//printf("OG_len: %d\n", real);
	printf("FT_len: %d\n", mine);

	printf("\n-----------\n");

	return (0);
}
