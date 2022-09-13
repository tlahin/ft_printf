//header

#include "ft_printf.h"

t_data	*get_modifiers(t_data *info)
{
	info->i++;
    if (info->srch_fmt[info->i] != '\0')
        check_prefix(info);
    if (info->srch_fmt[info->i] != '\0')
        check_width(info);
    //precision
    //length
    if (info->srch_fmt[info->i] != '\0')
        check_specifier(info);
    if (info->srch_fmt[info->i] != '\0')
        printer(info);
    return (info);
}
