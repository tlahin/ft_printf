//header

#include "libft.h"

int ft_bankers(long double number, int prec)
{
    int         counter;
    long double decider;

    decider = number;
    counter = 0;
    while (counter++ <= prec)
    {
        if (decider < 0)
		    decider *= -1;
        decider -= (int)decider;
        decider *= 10;
        if (counter == prec && (int)decider % 2 == 1)
            return (1);
        if ((int)decider >= 5)
        {
            if (number < 0)
                number *= -1;
            if ((int)number % 2 == 1)
                return (1);
        }
    }
    return (0);
}