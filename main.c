#include <stdio.h>
#include "includes/ft_printf.h"
#include <limits.h>

int main(void)
{
	int real;
	int mine;

/* 	printf("\n---------------------\n\n");
	printf("%%*.*d, 0, 3, 0\n\n");
	printf("OG_printf: \n");
	real = printf("%*.*d", 0, 3, 0);
	printf("\n\n");
	printf("FT_printf: \n");
	mine = ft_printf("%*.*d", 0, 3, 0);
	printf("\n\n");
	printf("OG_printf returns: %d\n", real);
	printf("FT_printf returns: %d\n", mine);

	printf("\n---------------------\n\n");

	printf("{%%*3d}, 5, 0\n\n");
	printf("OG_printf: \n");
	real = printf("{%*3d}", 5, 0);
	printf("\n\n");
	printf("FT_printf: \n");
	mine = ft_printf("{%*3d}", 5, 0);
	printf("\n\n");
	printf("OG_printf returns: %d\n", real);
	printf("FT_printf returns: %d\n", mine);

	printf("\n---------------------\n\n");

	printf("%%*d, 5, 42\n\n");
	printf("OG_printf: \n");
	real = printf("%*d", 5, 42);
	printf("\n\n");
	printf("FT_printf: \n");
	mine = ft_printf("%*d", 5, 42);
	printf("\n\n");
	printf("OG_printf returns: %d\n", real);
	printf("FT_printf returns: %d\n", mine);

	printf("\n---------------------\n\n");

	printf("%%f%%lf%%Lf, 1.42, 1.42, 1.42l\n\n");
	printf("OG_printf: \n");
	real = printf("%f\n%lf\n%Lf", 1.42, 1.42, 1.42l);
	printf("\n\n");
	printf("FT_printf: \n");
	mine = ft_printf("%f\n%lf\n%Lf", 1.42, 1.42, 1.42l);
	printf("\n\n");
	printf("OG_printf returns: %d\n", real);
	printf("FT_printf returns: %d\n", mine);*/

	printf("\n---------------------\n\n");

	printf("OG_printf: \n");
	real = printf("%010.3f\n", 3.14159265);
	printf("\n\n");
	printf("FT_printf: \n");
	mine = ft_printf("%010.3f\n", 3.14159265);
	printf("\n\n");
	printf("OG_printf returns: %d\n", real);
	printf("FT_printf returns: %d\n", mine);

	printf("\n---------------------\n\n");
	return (0);
}
