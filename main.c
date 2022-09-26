#include <stdio.h>
#include "includes/ft_printf.h"
#include <limits.h>

int main(void)
{
	int real;
	int mine;

 	printf("\n---------------------\n\n");
	printf("OG_printf: \n");
	real = printf("%.2f\n", -958.125);
	printf("\n");
	printf("FT_printf: \n");
	mine = ft_printf("%.2f\n", -958.125);
	printf("\n");
	printf("OG_printf returns: %d\n", real);
	printf("FT_printf returns: %d\n", mine);
	printf("\n---------------------\n\n");
	printf("OG_printf: \n");
	real = printf("%.3f\n", -56.9325);
	printf("\n");
	printf("FT_printf: \n");
	mine = ft_printf("%.3f\n", -56.9325);
	printf("\n");
	printf("OG_printf returns: %d\n", real);
	printf("FT_printf returns: %d\n", mine);
	printf("\n---------------------\n\n");
	printf("OG_printf: \n");
	real = printf("%.0f\n", -0.550000);
	printf("\n");
	printf("FT_printf: \n");
	mine = ft_printf("%.0f\n", -0.550000);
	printf("\n");
	printf("OG_printf returns: %d\n", real);
	printf("FT_printf returns: %d\n", mine);
	printf("\n---------------------\n\n");
	printf("OG_printf: \n");
	real = printf("%0x\n", 0);
	printf("\n");
	printf("FT_printf: \n");
	mine = ft_printf("%0x\n", 0);
	printf("\n");
	printf("OG_printf returns: %d\n", real);
	printf("FT_printf returns: %d\n", mine);
	printf("\n---------------------\n\n");
	return (0);
}
