//header

#include "libft.h"

char	*ft_strndup(char *str, int size)
{
	char	*new;
	int		i;

	i = 0;
	if (!(new = ft_strnew(size)))
		return (NULL);
	while (str && i < size)
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}