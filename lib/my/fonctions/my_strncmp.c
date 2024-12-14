/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** Compares up to 'n' characters of the C string s1 to those of the C string s2.
*/

int my_strncmp(char const *s1 , char const *s2, int n)
{
    return
    *s1 && *s2 && n ?
        *s1 == *s2 ?
            my_strncmp(s1 + 1, s2 + 1, n - 1)
        :
            *s1 - *s2
    :
        0;
}
