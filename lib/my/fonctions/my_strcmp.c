/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** The strcmp() function compares the two strings s1 and s2.
*/

int my_put_nbr(int);

__attribute__((const, nonnull))
int my_strcmp(char const *s1 , char const *s2)
{
    return
    *s1 && *s2 ?
        *s1 - *s2 + my_strcmp(s1 + 1, s2 + 1)
    : *s1 ?
        *s1
    : *s2 ?
        - *s2
    :
        0;
}
