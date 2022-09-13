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

typedef struct		s_data
{
	const char	*fmt;
	char		*c_fmt;
	char		*srch_fmt;
	va_list		args;
	size_t		i;
	int			len;
	int			padding;
	char		specifier;
	long int	width;
	int			s_len;
	long int	prec;
	char		len_flags[3];
	char		prefix[6];
	char		*hex_chars;
	char		*format_flags;
	char		*a_flags;
	char		*spec_flags;
	char		get_plus;
}					t_data;

int	ft_printf(const char *format, ...);
t_data	*printer(t_data *info);
t_data	*init_data(t_data *info);
t_data	*reset_data(t_data *info);
t_data	*get_modifiers(t_data *info);
t_data	*check_prefix(t_data *info);
t_data  *check_width(t_data *info);
t_data  *print_char(t_data *info);
t_data	*print_str(t_data *info);
t_data  *print_alternative(t_data *info, int amount, int c);
t_data	*check_specifier(t_data *info);



#endif
