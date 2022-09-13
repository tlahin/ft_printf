//header

#include "ft_printf.h"

t_data	*print_alternative(t_data *info, int amount, int c)
{
	char *new;

	if (amount > 0)
	{
		if (!(new = (char*)malloc(sizeof(char) * amount + 1)))
			exit(-1);
		ft_memset(new, c, amount);
		write(1, new, amount);
		info->len += amount;
		free(new);
	}
	return (info);
}