//header

#include "ft_printf.h"

t_data  *print_char(t_data *info)
{
    if (info->prefix[0] == '-' && info->width > 0 && \
        (info->prefix[4] == 0 || info->prefix[4] == '\0'))
    {
        ft_putchar(va_arg(info->args, int));
        info->len += 1;
        while (info->width - 1 >= 1)
        {
            print_alternative(info, 1, 32);
            info->width--;
        }
    }
    else
    {
        while ((info->width -1) > 0)
        {
            print_alternative(info, 1, 32);
            info->width--;
        }
        ft_putchar(va_arg(info->args, int));
        info->len += 1;
    }
    return (info);
}