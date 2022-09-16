/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alternative.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:31:40 by tlahin            #+#    #+#             */
/*   Updated: 2022/09/15 12:31:43 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_data	*print_alternative(t_data *info, int c, int amount)
{
	char	*new;

	if (amount > 0)
	{
		new = (char *)malloc(sizeof(char) * amount + 1);
		if (!new)
			exit(-1);
		ft_memset(new, amount, c);
		write(1, new, amount);
		info->len += amount;
		free(new);
	}
	return (info);
}
