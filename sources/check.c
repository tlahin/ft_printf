//header

#include "ft_printf.h"

t_data	*check_specifier(t_data *info)
{
	int i;

	i = 0;
	while (info->spec_flags[i] != '\0')
	{
		if (info->srch_fmt[info->i] == info->spec_flags[i])
			info->specifier = info->srch_fmt[info->i];
		i++;
	}
	return (info);
}

t_data  *check_width(t_data *info)
{
    while (ft_isdigit(info->srch_fmt[info->i]))
    {
        info->width *= 10;
        info->width += (info->srch_fmt[info->i] - 48);
        info->i++;
    }
    return (info);
}

t_data  *check_prefix(t_data *info)
{
    size_t  i;

    i = 0;
    while (info->format_flags[i] != '\0')
    {
        while (info->format_flags[i] == info->srch_fmt[info->i])
        {
            if (info->srch_fmt[info->i] == '-')
                info->prefix[0] = '-';
            if (info->srch_fmt[info->i] == '+')
                info->prefix[1] = '+';
            if (info->srch_fmt[info->i] == ' ')
                info->prefix[2] = ' ';
            if (info->srch_fmt[info->i] == '#')
                info->prefix[3] = '#';
            if (info->srch_fmt[info->i] == '0')
                info->prefix[4] = '0';
            i = 0;
            info->i++;
        }
        i++;
    }
    return (info);
}