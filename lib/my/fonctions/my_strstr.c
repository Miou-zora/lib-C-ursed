/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** The strstr function searches within the string pointed to by s1
** for the string pointed to by s2. It returns a pointer to the
** first occurrence in s1 of s2.
*/

#include <stdbool.h>
#include <stddef.h>

#include "my.h"

// Classic no "if, else, while, for"  recursive implementation

// static char *r1_my_strstr(char *str , char *to_find, int size_of_to_find)
// {
//     return
//     !*str ?
//         NULL
//     : my_strncmp(str, to_find, size_of_to_find) == 0 ?
//         str
//     :
//         r1_my_strstr(str + 1, to_find, size_of_to_find);
// }

// __attribute__((nonnull))
// char *my_strstr(char *str , char *to_find)
// {
//     return
//     !*to_find ?
//         str
//     :
//         r1_my_strstr(str, to_find, my_strlen(to_find));
// }

// Classic no "ternary, if, else, while, for"  recursive implementation
#include <stdint.h>

char *r1_my_strstr(char *str , char *to_find, int size_of_to_find);
char *r2_my_strstr(char *str , char *to_find, int size_of_to_find);

char *return_null(char *, char *, int )
{
    return NULL;
};

char *return_str(char *str , char *, int)
{
    return str - 1;
};

char *r2_my_strstr(char *str , char *to_find, int size_of_to_find)
{
    return (char *(*[])(char *, char *, int)){return_str, r1_my_strstr}[!!my_strncmp(str, to_find, size_of_to_find)](str+1, to_find, size_of_to_find);
}

char *r1_my_strstr(char *str , char *to_find, int size_of_to_find)
{
    return (char *(*[])(char *, char *, int)){return_null, r2_my_strstr}[!!*str](str, to_find, size_of_to_find);
}

__attribute__((nonnull))
char *my_strstr(char *str , char *to_find)
{
    return (char *(*[])(char *, char *, int)){return_str, r1_my_strstr}[!!*to_find](str + !*to_find, to_find, my_strlen(to_find));
}