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
	char	*ptr;

	c = 'A';
	str = "ABC";
	i = 42;
	ptr = str;
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
	ft_printf("ft_printf: %p\n", &ptr);
	printf("OG_printf: %p\n\n", &ptr);
	return (1);
}
