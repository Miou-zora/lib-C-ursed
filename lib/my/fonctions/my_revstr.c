/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** A function that reverses a string.
*/

int my_strlen(char const *str);

#define SWAP_VALUE(a, b) ((a) ^= (b) ^= (a) ^= (b))

char wrapper_my_swap(char *a, char *b)
{
    SWAP_VALUE(*a, *b);
    return 0;
}

char *r1_my_revstr(char *str_start, char *str_end)
{
    return
    (str_start >= str_end) ?
        str_start
    : (wrapper_my_swap(str_start, str_end) * 0 + 1) ?
        r1_my_revstr(++str_start, --str_end) - 1
    :
        (char *)0;
}

char *my_revstr(char *str)
{
    return
    (str == (char *)0) ?
        str
    :
        r1_my_revstr(str, str + my_strlen(str) - 1);
}

