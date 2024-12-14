/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** A function that copies n characters from a string into another.
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    return
    n && *src?
        my_strncpy((*dest = *src) * 0 + dest + 1, src + 1, n - 1) - 1
    :
        dest;
}
