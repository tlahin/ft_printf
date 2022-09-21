
#include <stdio.h>
#include "includes/ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	real;
	int mine;

	printf("\n-----------\n");
	printf("lu, lo, lx, lX and %%\n\n");
	real = printf("%lx\n%lX\n%lo\n%lu\n%%", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	printf("\n\n");
	mine = ft_printf("%lx\n%lX\n%lo\n%lu\n%%", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	printf("\n\n");
	printf("OG_len: %d\n", real);
	printf("FT_len: %d\n", mine);

	printf("\n-----------\n");

	return (0);
}
