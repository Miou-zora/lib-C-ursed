/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** A function that reverses a string.
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int max = my_strlen(str) - 1;
    char tmp = 0;
    int i = 0;

    while (i < max) {
        tmp = str[i];
        str[i] = str[max];
        str[max] = tmp;
        max--;
        i++;
    }
    return (str);
}