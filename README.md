# ft_printf

Second project for [42 school](https://42.fr/en/homepage/). We have to recode a simpler `printf()` function which handles the `cspdiuxX%` conversions.

## Prototype

```c
int ft_printf(const char *str, ...);
```

## Supported format specifiers

| Specifier | Output                                           |
| :-------: | ------------------------------------------------ |
|   `%c`    | a single character                               |
|   `%s`    | a string (as defined by the common C convention) |
|   `%p`    | a void \* pointer printed in hexadecimal format  |
|   `%d`    | a decimal (base 10) number                       |
|   `%i`    | an integer in base 10                            |
|   `%u`    | an unsigned decimal (base 10) number             |
|   `%x`    | a number in hexadecimal lowercase format         |
|   `%X`    | a number in hexadecimal uppercase format         |
|   `%%`    | a percent sign                                   |

### Functions from ft_printf library

- [`ft_format`](srcs/ft_format.c) - Parses a str format string and calls specific functions to print different types of data, extracting the  
   values from the list of args arguments
- [`ft_print_c`](srcs/ft_print_c.c) - print a single character.
- [`ft_print_di`](srcs/ft_print_di.c) - print a decimal (base 10) number/an integer in base 10.
- [`ft_print_p`](srcs/ft_print_p.c) - print a void \* pointer printed in hexadecimal format.
- [`ft_print_s`](srcs/ft_print_s.c) - print a string.
- [`ft_print_u`](srcs/ft_print_u.c) - print an unsigned decimal (base 10) number.
- [`ft_print_x`](srcs/ft_print_x.c) - print a number in hexadecimal lowercase format/a number in hexadecimal uppercase format.
- [`ft_printf`](srcs/ft_printf.c) - Print one message per screen using a format string that includes Instructions for mixing multiple  
   strings in the final chain to be displayed on screen..
