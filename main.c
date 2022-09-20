
#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	int	real;
	int mine;

	real = printf("%lu", 4294967296);
	printf("\n");
	mine = ft_printf("%lu", 4294967296);
	printf("\n");
	printf("OG_len: %d\n", real);
	printf("FT_len: %d\n", mine);
	printf("\n");
	//printf("%lu", -42);
	return (0);
}
