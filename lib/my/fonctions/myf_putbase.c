/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-alexandre.franquet [WSL: Ubuntu]
** File description:
** myf_putbase
*/

#include <stdarg.h>
#include <stdlib.h>

char *convert_base(long long number, char *base);

int my_putstr(char const *str);

void myf_putexam(va_list val)
{
    char base[] = "0123456789ABCDEF";
    unsigned int value = va_arg(val, unsigned int);
    char *new_value;

    new_value = convert_base(value, base);
    my_putstr(new_value);
    free(new_value);
}

void myf_putexah(va_list val)
{
    char base[] = "0123456789abcdef";
    unsigned int value = va_arg(val, unsigned int);
    char *new_value;

    new_value = convert_base(value, base);
    my_putstr(new_value);
    free(new_value);
}

void myf_putpoint(va_list val)
{
    char base[] = "0123456789abcdef";
    unsigned long value = (unsigned long)va_arg(val, void *);
    char *new_value = convert_base(value, base);

    my_putstr("0x");
    my_putstr(new_value);
    free(new_value);
}

void myf_putocta(va_list val)
{
    char base[] = "01234567";
    unsigned int value = va_arg(val, unsigned int);
    char *new_value;

    new_value = convert_base(value, base);
    my_putstr(new_value);
    free(new_value);
}

void myf_putbinary(va_list val)
{
    char base[] = "01";
    unsigned int value = va_arg(val, unsigned int);
    char *new_value;

    new_value = convert_base(value, base);
    my_putstr(new_value);
    free(new_value);
}
