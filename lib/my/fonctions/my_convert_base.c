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
    return (
    (!para[1] || para[1] == 1) ?
        ((para[2] = 0) == 0) ?
            para
        :
            para
    : (!para[0]) ?
        para
    :
        r1_get_nblen((int[]){para[0] / para[1], para[1], para[2] + 1}));
}

int get_nblen(int number, int blen)
{
    return (r1_get_nblen((int[]){number, blen, 1})[2]);
}

char *r2_convert_base(long long number, char *base, int blen, char *new_base, size_t i)
{
    for (; number; i++) {
        new_base[i] = base[number % blen];
        number = number / blen;
    }
    return ((number == 0) ?
        new_base
    : ((new_base[i] = base[number % blen]) || 1) ?
        ((number = number / blen) == 0 && (i = i + 1) != 0) ?
            new_base
        :
            r2_convert_base(number, base, blen, new_base, i)
    :
        NULL);
}

char *r1_convert_base(long long number, char *base, int blen, char *new_base)
{
    return (
    (new_base == NULL) ?
        NULL
    :
        my_revstr(r2_convert_base(number, base, blen, new_base, 0)));
}

char *i1_convert_base(long long number, char *base, int blen)
{
    return (r1_convert_base(number, base, blen, my_calloc(get_nblen(number, blen) + 1, sizeof(char *))));
}

char *convert_base(long long number, char *base)
{
    return (
    (base == NULL) ?
        NULL
    :
        i1_convert_base(number, base, my_strlen(base)));
}

char *r1_convert_octa_set_str(char *str, int nbr)
{
    return (
    (str == NULL) ?
        NULL
    : (nbr <= 0) ?
        str
    : (str[my_strlen(str)] = nbr % 8 + '0') ?
        ((nbr = nbr / 8) != 0) ?
            r1_convert_octa_set_str(str, nbr)
        :
            str
    : str);
}

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
