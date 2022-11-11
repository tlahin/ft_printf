Included in updated libft (see: [libft](https://github.com/tlahin/libft))

# Reimplementation of the libc's function printf.

  More information about the functionality in the subject [ft_printf.en.pdf](https://github.com/tlahin/ft_printf/files/8990312/ft_printf.en.pdf).
  
  # Supported features
    
  Conversions:
    
       csp    (char, string, pointer)
       diouxX (int, int, octal, unsigned int, hex, HEX)
       f      (float)
       
  Length modifiers:
      
      hh, h, l and ll with formats 'diouxX'
      l and L with format 'f'

  Flags:
    
      #0-+ and 'space'
      
  Other:
    
      precision
      field width
      %%

# Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

# Instructions

**1. Compiling the library**

To compile, go to the library path and run:

```shell
make && make clean
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "ft_printf.h"
```

  
