
#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	int	real;
	int mine;

/* 	printf("-----------\n\n");
	printf("lu, lo, lx, lX and %% with max_values aka 0/\n\n");
	real = printf("%lx\n%lX\n%lo\n%lu\n%%", "0/", "/0", "/0", "/0", "0/");
	printf("\n");
	mine = ft_printf("%lx\n%lX\n%lo\n%lu\n%%", "0/", "/0", "/0", "/0", "0/");
	printf("\n");
	printf("OG_len: %d\n", real);
	printf("FT_len: %d\n", mine); */

	printf("\n-----------\n");
	
	printf("%%-10.10%%\n\n");
	real = printf("%-10.10%");
	printf("\n");
	mine = ft_printf("%-10.10%");
	printf("\n");
	printf("OG_len: %d\n", real);
	printf("FT_len: %d\n", mine);

	printf("\n-----------\n");


	return (0);
}
