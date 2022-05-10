/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-alexandre.franquet [WSL: Ubuntu]
** File description:
** my_convert_base
*/

#include <stddef.h>

char *my_revstr(char *str);

void *my_calloc(int elem_count, int elem_size);
int get_nbrlen(int nb);
int my_strlen(char const *str);
int my_printf(char const *str, ...);

int *r1_get_nblen(int *para)
{
    return ((!para[0]) ?
    para : r1_get_nblen((int[]){para[0] / para[1], para[1], para[2] + 1}));
}

int get_nblen(int number, int blen)
{
    return (r1_get_nblen((int[]){number, blen, 1})[2]);
}

char *convert_base(long long number, char *base)
{
    int blen = my_strlen(base);
    char *new_base = my_calloc(get_nblen(number, blen) + 1, sizeof(char *));

    for (int i = 0; number; i++) {
        new_base[i] = base[number % blen];
        number = number / blen;
    }
    new_base = my_revstr(new_base);
    return (new_base);
}

char *m1_convert_octa_set_str(char *str)
{
    return ((str == NULL) ?
    NULL : ((str[0] = '0') != '0') ?
    NULL : ((str[1] = '0') != '0') ?
    NULL : ((str[2] = '0') != '0') ?
    NULL : str);
}

char *r1_convert_octa_set_str(char *str, int nbr)
{
    return ((str == NULL) ?
    NULL : (nbr <= 0) ?
    str : (str[my_strlen(str)] = nbr % 8 + '0') ?
    ((nbr = nbr / 8) != 0) ?
        r1_convert_octa_set_str(str, nbr) : str
    : str);
}

// char

char *convert_octa(int nbr)
{
    return (my_revstr(
        r1_convert_octa_set_str(
            my_calloc(
                get_nbrlen(nbr) * 10 / 8 + 1, sizeof(char)
            ), nbr
        )
    ));
}
