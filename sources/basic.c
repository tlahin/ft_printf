/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:09:34 by tlahin            #+#    #+#             */
/*   Updated: 2022/07/03 20:09:36 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int 	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (-1);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;	
	}
	return (i);
}

int	ft_print_nbr(int nbr)
{
	int 	len;
	char	*number;

	number = ft_itoa(nbr);
	len = ft_print_str(number);
	return (len);
}

int	ft_print_precent(void)
{
	write(1, "%", 1);
	return (1);
}
