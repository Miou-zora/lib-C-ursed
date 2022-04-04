/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** A function that concatenates two strings.
*/

int my_strlen(char *);

char *my_strcat(char *dest, char *src)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    for (; src[i]; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return dest;
}
