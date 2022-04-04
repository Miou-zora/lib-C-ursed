/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** A function that copies a string into another.
*/

char *my_strcpy(char *dest , char const *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
