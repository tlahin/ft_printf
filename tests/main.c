/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:30:10 by tlahin            #+#    #+#             */
/*   Updated: 2022/07/04 14:30:12 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	char	c;
	char	*str;
	int		i;
	char	*ptr1;
	char	*ptr2;
	int	x;
	int	u;

	c = 'A';
	str = "ABC";
	i = 123;
	ptr1 = str;
	ptr2 = NULL;
	x = 42;
	u = 3000000;

	printf("\n%%\n");
	ft_printf("ft_printf: Hello %%!\n");
	printf("OG_printf: Hello %%!\n\n");
	
	printf("char\n");
	ft_printf("ft_printf: %c\n", c);
	printf("OG_printf: %c\n\n", c);
	
	printf("str\n");
	ft_printf("ft_printf: %s\n", str);
	printf("OG_printf: %s\n\n", str);
	
	printf("integer\n");
	ft_printf("ft_printf: %d\n", i);
	printf("OG_printf: %d\n\n", i);
	
	printf("integer\n");
	ft_printf("ft_printf: %i\n", i);
	printf("OG_printf: %i\n\n", i);
	
	printf("pointer\n");
	ft_printf("ft_printf: %p\n", &ptr1);
	printf("OG_printf: %p\n\n", &ptr1);
	
	printf("pointer null\n");
	ft_printf("ft_printf: %p\n", &ptr2);
	printf("OG_printf: %p\n\n", &ptr2); 

	printf("octal decimal\n");
	ft_printf("ft_printf: %o\n", x);
	printf("OG_printf: %o\n\n", x);

	printf("unsigned integer\n");
	ft_printf("ft_printf: %u\n", u);
	printf("OG_printf: %u\n\n", u);

	printf("smoll hexa decimal\n");
	ft_printf("ft_printf: %x\n", x);
	printf("OG_printf: %x\n\n", x);

	printf("big hexa decimal\n");
	ft_printf("ft_printf: %X\n", x);
	printf("OG_printf: %X\n\n", x);
	return (1);
}
