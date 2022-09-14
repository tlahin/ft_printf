//header

#include "ft_printf.h"

uintmax_t   cast_xou(t_data *info)
{
    uintmax_t    number;

    if (ft_strcmp(info->length_flags, "h") == 0)
        number = (unsigned short)va_arg(info->args, unsigned int);
    else if (ft_strcmp(info->length_flags, "hh") == 0)
        number = (unsigned char)va_arg(info->args, long long);
    else if (ft_strcmp(info->length_flags, "l") == 0)
        number = (unsigned long)va_arg(info->args, unsigned long int);
    else if (ft_strcmp(info->length_flags, "ll") == 0)
        number = (unsigned long long)va_arg(info->args, unsigned long long);
    else
        number = (unsigned int)va_arg(info->args, unsigned int);
    return (number);
}

intmax_t    cast_di(t_data *info)
{
    intmax_t    number;

    if (ft_strcmp(info->length_flags, "h") == 0)
        number = (short)va_arg(info->args, long long);
    else if (ft_strcmp(info->length_flags, "hh") == 0)
        number = (signed char)va_arg(info->args, long long);
    else if (ft_strcmp(info->length_flags, "l") == 0)
        number = (long)va_arg(info->args, long long int);
    else if (ft_strcmp(info->length_flags, "ll") == 0)
        number = (long long)va_arg(info->args, long long);
    else
        number = (int)va_arg(info->args, int);
    return (number);
}