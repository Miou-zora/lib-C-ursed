/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-alexandre.franquet [WSL: Ubuntu]
** File description:
** myf_putthat
*/

#include <stdarg.h>

int my_put_nbr(long long);

char *convert_octa(int nbr);

int my_strlen(char const *str);

int my_putstr(char const *str);

void my_putchar(char c);

void myf_putchar(va_list val)
{
    my_putchar(va_arg(val, int));
}

void myf_put_nbr(va_list val)
{
    my_put_nbr(va_arg(val, int));
}

void myf_putstr(va_list val)
{
    my_putstr(va_arg(val, char *));
}

void myf_putmod(void)
{
    my_putchar('%');
}

void myf_putstrocta(va_list val)
{
    char *str = va_arg(val, char *);

    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] >= 32 && str[i] <= 126) {
            my_putchar(str[i]);
        } else {
            my_putchar('\\');
            my_putstr(convert_octa(str[i]));
        }
    }
}
