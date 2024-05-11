/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** A function that copies a string into another.
*/

static
char *r1_my_strcpy(char *dest , char const *src)
{
    return
    *src ?
        (char *)((long)r1_my_strcpy(dest + 1, src + 1) - 1 + (*dest = *src) * 0)
    :
        dest;
}
// There is maybe a way to it a lot faster (x4 or x8) by casting char * to long * but I don't know how to do it. :3
char *my_strcpy(char *dest , char const *src)
{
    return
    !src ?
        dest
    :
        r1_my_strcpy(dest, src);
}
