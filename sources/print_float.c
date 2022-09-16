//header

#include "ft_printf.h"

static void put_f(t_data *info, long double number, int empty,\
                int zero)
{
	if (!info->prefix[0] && !info->prefix[4])
		print_alternative(info, ' ', info->width - empty);
	if (info->prefix[2] == ' ' && number >= 0 && info->width)
		print_alternative(info, ' ', 1);
	if (number < 0)
		print_alternative(info, '-', 1);
	if (number >= 0 && info->prefix[1] == '+')
		print_alternative(info, '+', 1);
	if (info->prefix[4] == '0' && zero >= 1)
		print_alternative(info, '0', zero);
}

static int  collect_f(t_data *info, long double number, int empty)
{
	if (info->prec == 0 && info->prefix[3] == '#')
		empty++;
	if (info->prefix[2] == ' ' && number >= 0)
		empty++;
	if (number < 0 || (info->prefix[1] == '+' && number >= 0))
		empty++;
	return (empty);
}

t_data  *print_float(t_data *info)
{
    long double     number;
    char            *flot;
    int             empty;
    int             zero;

    zero = 0;
    number = cast_flot(info);
    if (number < 0)
        info->len--;
    flot = ft_ftoa(number, info->prec, '.');
    empty = ft_strlen(flot);
    empty = collect_f(info, number, empty);
    if (!info->prefix[0] && info->width > info->prec && info->width > empty)
        zero = info->width - empty;
    put_f(info, number, empty, zero);
    ft_putstr(flot);
    if (info->prefix[3] && info->prec == 0)
        print_alternative(info, '.', 1);
    if (info->prefix[0] == '-')
        print_alternative(info, ' ', info->width - empty);
    info->len += empty;
    free(flot);
    return (info);
}