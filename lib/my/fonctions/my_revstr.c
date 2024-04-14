/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** A function that reverses a string.
*/

int my_strlen(char const *str);

static __attribute__((const, nonnull))
char *r1_my_revstr(char *str_start, char *str_end)
{
    return
    (str_start >= str_end) ?
        str_start
    :
        r1_my_revstr(++str_start, --str_end) - 1 + (*str_start ^= *str_end ^= *str_start ^= *str_end) * 0;
}

__attribute__((const))
char *my_revstr(char *str)
{
    return
    (str == (char *)0) ?
        str
    :
        r1_my_revstr(str, str + my_strlen(str) - 1);
}

