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
# include <stdio.h> //laiton

// structs

// function prototypes
int		ft_printf(const char *format, ...);
int		ft_print_char(int c);
int		ft_print_str(char *str);
int		ft_print_nbr(int nbr);
int		ft_print_precent(void);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_oct(unsigned int num);
int		ft_print_hex(unsigned int num, const char format);
int		ft_print_uint(unsigned int num);

#endif
