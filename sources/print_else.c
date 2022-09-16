//header

#include "ft_printf.h"

t_data  *print_percent(t_data *info)
{
    if (info->prefix[4] == '0' && !info->prefix[0] && info->prec <= 0)
    {
        info->prec = info->width;
        info->width = 0;
    }
    if (info->prefix[0] != '-')
        print_alternative(info, ' ', info->width - 1);
    if (info->prefix[4] == '0')
        print_alternative(info, '0', info->prec);
    write(1, "%", 1);
    if (info->prefix[0] == '-')
        print_alternative(info, ' ', info->width - 1);
    info->len += 1;
    return (info);
}

void    print_else(t_data *info)
{
    if (info->c_fmt[info->i] == '%')
        print_percent(info);
    else
        print_alternative(info, ' ', info->width - 1);
}