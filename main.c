
#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	int	real;
	int mine;

	printf("\n-----------\n");
	printf("%%05%%\n");
	real = printf("%05%");
	printf("\n");
	mine = ft_printf("%05%");
	printf("\n");
	printf("OG_len: %d\n", real);
	printf("FT_len: %d\n", mine);

	printf("\n-----------\n");

	return (0);
}
