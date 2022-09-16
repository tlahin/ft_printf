//header

#include "ft_printf.h"

static void print_u_0(t_data *info, uintmax_t number)
{
    if (number && number == 0)
        print_alternative(info, '0', 1);
}

static int  collect_u(t_data *info)
{
    int empty;

    empty = info->s_len;
    if (info->prefix[4] == '0' && info->prec == -1 && info->prefix[3] != '-')
        info->prec = info->width;
    if (info->s_len <= info->prec && info->prec > 0)
        empty = info->prec;
    if (info->prefix[0] != '-')
        print_alternative(info, ' ', info->width);
    return (empty);
}

t_data  *print_unsigned(t_data *info)
{
    char        *tmp;
    uintmax_t   number;
    int         empty;

    number  = cast_xou(info);
    if (number == 0 && info->prec == 0)
    {
        print_alternative(info, ' ', info->width);
        return (info);
    }
    if (number == 9223372036854775807)
		tmp = ft_strdup("9223372036854775807");
    else
        if (number == 0)
            tmp = ft_strdup("0");
        else
            tmp = ft_itoa_base(number, 10);
    if (number == 0)
        info->s_len += 1;
    else
        info->s_len += ft_strlen(tmp);
    empty = collect_u(info);
    print_u_0(info, number);
    print_alternative(info, '0', info->prec - info->s_len);
    ft_putstr(tmp);
    info->len += ft_strlen(tmp);
    if (info->prefix[0] == '-')
        print_alternative(info, ' ', info->width - empty);
    free(tmp);
    return (info);
}