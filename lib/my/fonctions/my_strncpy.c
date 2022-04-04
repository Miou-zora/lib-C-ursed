/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** A function that copies n characters from a string into another.
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    int i = 0;

    for (; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (i < n) {
        dest[i] = '\0';
    }
    return (dest);
}
