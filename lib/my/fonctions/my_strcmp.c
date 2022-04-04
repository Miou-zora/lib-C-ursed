/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** The strcmp() function compares the two strings s1 and s2.
*/

int my_put_nbr(int);

int my_strcmp(char const *s1 , char const *s2)
{
    int value_s1 = 0;

    for (int i = 0; s1[i] && s2[i]; i++) {
        value_s1 += s1[i] - s2[i];
    }
    return (value_s1);
}
