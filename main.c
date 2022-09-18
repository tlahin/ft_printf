
#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	int	real;
	int mine;

	printf("\n");
	real = printf("@moulitest: %#.o %#.0o", 0, 0);
	printf("\n");
	mine = ft_printf("@moulitest: %#.o %#.0o", 0, 0);
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");
	
	real = printf("%d %d", 1, -2);
	printf("\n");
	mine = ft_printf("%d %d", 1, -2);
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");

	real = printf("%10s is a string", "this");
	printf("\n");
	mine = ft_printf("%10s is a string", "this");
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");

	real = printf("%5.2s is a string", "this"); 
	printf("\n");
	mine = ft_printf("%5.2s is a string", "this"); 
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");

	/*
	real = printf("%5u", 4294967295);
	printf("\n");
	mine = ft_printf("%5u", 4294967295); 
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");
	*/
	/*
	real = printf("%015u", 4294967295);
	printf("\n");
	mine = ft_printf("%015u", 4294967295);
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");
	*/
	/*
	real = printf("%d %d %d %d gg!", 1, -2, 33, 42, 0);
	printf("\n");
	mine = ft_printf("%d %d %d %d gg!", 1, -2, 33, 42, 0);
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");
	*/
	/*
	real = printf("%lu", -42);
	printf("\n");
	mine = ft_printf("%lu", -42);
	printf("\n");
	printf("real: %d\n", real);
	printf("mine: %d\n", mine);
	printf("\n");
	*/
	/*
	real = printf("%");
	printf("\n");
	mine = ft_printf("%");
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");
	*/
	/*
	real = printf("%5+d", 42);
	printf("\n");
	mine = ft_printf("%5+d", 42);
	printf("\n");
	printf("real_len: %d\n", real);
	printf("mine_len: %d\n", mine);
	printf("\n");
	*/
	return (0);
}