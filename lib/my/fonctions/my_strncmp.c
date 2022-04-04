/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** Compares up to 'n' characters of the C string s1 to those of the C string s2.
*/

int my_strncmp(char const *s1 , char const *s2, int n)
{
    int value_s1 = 0;

    for (int i = 0; s1[i] && s2[i] && i < n; i++) {
        value_s1 += s1[i] - s2[i];
    }
    return (value_s1);
}
