//Header

#include "ft_printf.h"

t_data	*printer(t_data *info)
{
	char	*specifier;

	specifier = &info->specifier;
	if (ft_strchr("cspxXdioufF%", (int)info->srch_fmt[info->i]))
	{
		if (*specifier == 'c')
			print_char(info);
		else if (*specifier == 's')
			print_str(info);
		else if (*specifier == 'p')
			print_pointer(info);
		else if (*specifier == 'd' || *specifier == 'i' )
			print_integer(info);
		else
			printf("Not implemented yet\n");
	}
	return (info);
}
