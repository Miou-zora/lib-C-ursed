/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** A function that concatenates n characters of the src
** string to the end of the dest string.
*/

int my_strlen(char *);

char *my_strncat(char *dest , char const *src , int nb)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    for (; src[i] && i < nb; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return dest;
}
