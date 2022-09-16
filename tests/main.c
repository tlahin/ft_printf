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
	char	*ptr;
	int		i;

	c = 'A';
	str = "str";
	ptr = str;
	i = c;
	printf("Character 'c'\n");
	printf("OG_printf: %c\n", c);
	ft_printf("FT_printf: %c\n\n", c);
	printf("String 's'\n");
	printf("OG_printf: %s\n", str);
	ft_printf("FT_printf: %s\n\n", str);
	printf("Pointer 'p'\n");
	printf("OG_printf: %p\n", ptr);
	ft_printf("FT_printf: %p\n\n", ptr);
	printf("Integer 'd'\n");
	printf("OG_printf: %d\n", i);
	ft_printf("FT_printf: %d\n\n", i);
	printf("Integer 'i'\n");
	printf("OG_printf: %i\n", i);
	ft_printf("FT_printf: %i\n\n", i);
	printf("Octal 'o'\n");
	printf("OG_printf: %#o\n", i);
	ft_printf("FT_printf: %#o\n\n", i);
	printf("small Hexa 'x'\n");
	printf("OG_printf: %#x\n", i * 123851);
	ft_printf("FT_printf: %#x\n\n", i * 123851);
	printf("big Hexa 'X'\n");
	printf("OG_printf: %#X\n", i * 123851);
	ft_printf("FT_printf: %#X`\n\n", i * 123851);
	return (1);
}
