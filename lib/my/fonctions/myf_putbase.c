/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-alexandre.franquet [WSL: Ubuntu]
** File description:
** myf_putbase
*/
//! TODO: TO TEST
#include <stdarg.h>
#include <stdlib.h>

char *convert_base(long long number, const char *base);

int my_putstr(char const *str);

static int i1_myf_putbase(va_list val, char *new_value, const char *base)
{
    return my_putstr((new_value = convert_base(va_arg(val, unsigned int), base))) || (union {void (*freeFn)(void *);char (*freeCharFn)(void *);}){free}.freeCharFn(new_value);
}

int myf_putexam(va_list val)
{
    return i1_myf_putbase(val, NULL, "0123456789ABCDEF");
}

int myf_putexah(va_list val)
{
    return i1_myf_putbase(val, NULL, "0123456789abcdef");
}

int myf_putpoint(va_list val)
{
    return my_putstr("0x") && i1_myf_putbase(val, NULL, "0123456789abcdef");
}

int myf_putocta(va_list val)
{
    return i1_myf_putbase(val, NULL, "01234567");
}

int myf_putbinary(va_list val)
{
    return i1_myf_putbase(val, NULL, "01");
}
