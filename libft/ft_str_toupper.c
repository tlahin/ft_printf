//header

#include "libft.h"

void	ft_str_toupper(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_isalpha(str[i]))
			ft_putchar(str[i]);
		else if (ft_isalpha(str[i]))
			ft_putchar(ft_toupper(str[i]));
		i++;
	}
}