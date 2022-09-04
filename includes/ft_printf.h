/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:43:25 by tlahin            #+#    #+#             */
/*   Updated: 2022/06/27 12:43:26 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"
# include <stdint.h>
# include <stdbool.h>
# include <stdio.h> //laiton

# define FLAGS "#0- +"

typedef struct		s_data
{
	bool		dash;
	bool		hash;
	bool		plus;
	bool		space;
}			t_data;

int	ft_printf(const char *format, ...);
int	print(va_list ap, t_data *info);
int	prefix(const char *format, t_data *info);
void	init_data(t_data *info);

#endif
