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

	c = 'c';
	str = "str";
	printf("Character\n");
	printf("OG_printf: %c\n", c);
	ft_printf("FT_printf: %c\n\n", c);

	printf("String\n");
	printf("OG_printf: %s\n", str);
	ft_printf("FT_printf: %s\n\n", str);
	return (1);
}
