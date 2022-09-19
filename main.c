
#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	int	real;
	int mine;

	real = printf("%5u", 65535);
	printf("\n");
	mine = ft_printf("%5u", 65535);
	printf("\n");
	printf("OG_len: %d\n", real);
	printf("FT_len: %d\n", mine);
	printf("\n");
	/*
	real = printf("%15u", 4294967295);
	printf("\n");
	mine = ft_printf("%15u", 4294967295);
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");

	real = printf("%015u", 4294967295);
	printf("\n");
	mine = ft_printf("%015u", 4294967295);
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");

	real = printf("%lu", -42);
	printf("\n");
	mine = ft_printf("%lu", -42);
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");
	*/
	return (0);
}
