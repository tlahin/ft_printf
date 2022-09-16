/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:31:09 by tlahin            #+#    #+#             */
/*   Updated: 2022/09/15 12:31:11 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_data  *print_0(t_data *info, char specifier, uintmax_t number)
{
    if (number && info->prefix[3] == '#')
    {
        if (specifier == 'X')
        {
            write(1, "0X", 2);
            info->len += 2;
        }
        else if (specifier == 'x')
        {
            write(1, "0x", 2);
            info->len += 2;
        }
    }
    return (info);
}

static void put_hex(t_data *info, uintmax_t number, char *tmp)
{
    if (info->prefix[0] != '-')
        print_alternative(info, ' ', info->padding);
    print_0(info, info->specifier, number);
    if (info->specifier == 'X')
        ft_str_toupper(tmp);
    else
        ft_putstr(tmp);
    if (info->prefix[0] == '-')
        print_alternative(info, ' ', info->padding);
}

t_data	*print_hex(t_data *info)
{
    char        *tmp;
    uintmax_t   number;

    number = cast_xou(info);
    if (number == 0 && info->prec == 0)
    {
        print_alternative(info, ' ', info->width);
        return (info);
    }
    tmp = ft_itoa_base(number, 16);
    info->s_len = ft_strlen(tmp);
    put_hex(info, number, tmp);
    info->len += info->s_len;
    free(tmp);
	return (info);
}
