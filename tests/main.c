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

	c = 'A';
	str = "ABC";
	i = 42;
	ptr1 = str;
	ptr2 = NULL;
	ft_printf("\nft_printf: Hello %%!\n");
	printf("OG_printf: Hello %%!\n\n");
	ft_printf("ft_printf: %c\n", c);
	printf("OG_printf: %c\n\n", c);
	ft_printf("ft_printf: %s\n", str);
	printf("OG_printf: %s\n\n", str);
	ft_printf("ft_printf: %d\n", i);
	printf("OG_printf: %d\n\n", i);
	ft_printf("ft_printf: %i\n", i);
	printf("OG_printf: %i\n\n", i);
	ft_printf("ft_printf: %p\n", &ptr1);
	printf("OG_printf: %p\n\n", &ptr1);
	ft_printf("ft_printf: %p\n", &ptr2);
	printf("OG_printf: %p\n", &ptr2); 
	return (1);
}
