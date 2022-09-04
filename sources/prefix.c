//header

#include "ft_printf.h"

int	prefix(const char *format, t_data *info)
{
	int	chars_found;

	chars_found = 0;

	while (ft_strchr(FLAGS, *format))
	{
		if (*format == '-')
		{
			info->dash = true;
			chars_found++;
		}
		if (*format == '#')
		{
			info->hash = true;
			chars_found++;
		}
		if (*format == '+')
		{
			info->plus = true;
			chars_found++;
		}
		if (*format == ' ')
		{
			info->space = true;
			chars_found++;
		}
		if (info->space && info->plus)
		{
			info->space = false;
		}
	}
	return (chars_found);
}
