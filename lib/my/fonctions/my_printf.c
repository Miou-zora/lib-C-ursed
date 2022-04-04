/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-alexandre.franquet [WSL: Ubuntu]
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

int my_put_nbr(long long);

int my_putstr(char const *str);

void *my_calloc(int elem_count, int elem_size);

int my_strlen(char const *str);

char *my_revstr(char *str);

void my_putchar(char c);

void myf_putchar(va_list val);

void myf_put_nbr(va_list val);

void myf_putstr(va_list val);

void myf_putmod(void);

void myf_putexam(va_list val);

void myf_putexah(va_list val);

void myf_putpoint(va_list val);

void myf_putstrocta(va_list val);

void myf_putocta(va_list val);

void myf_putbinary(va_list val);

void (*print_functions[])(va_list) = {
    myf_putchar,
    myf_putstr,
    myf_put_nbr,
    myf_put_nbr,
    myf_putexah,
    myf_putexam,
    myf_putocta,
    myf_putpoint,
    myf_putbinary,
    myf_putstrocta
};

void print(char c, va_list ap)
{
    char flags[] = "csdixXopbS\0";

    for (int i = 0; flags[i]; i++) {
        if (flags[i] == c)
            print_functions[i](ap);
    }
    if (c == '%')
        myf_putmod();
}

int my_printf(char const *str, ...)
{
    va_list ap;
    int temp = 0;

    va_start(ap, str);
    for (; *str; str++) {
        if (*str == '%') {
            str += 1;
            (*str == 'l') ? temp = my_put_nbr(va_arg(ap, long)) : 0;
            (*str == 'u') ? my_put_nbr(va_arg(ap, unsigned int)) : 0;
            (*str == 'h') ? temp = my_put_nbr(va_arg(ap, int)) : 0;
            !(*str == 'l' || *str == 'h' || *str == 'u') ? print(*str, ap) : 0;
            str += temp;
            temp = 0;
        } else {
            my_putchar(*str);
        }
    }
    return (1);
}
