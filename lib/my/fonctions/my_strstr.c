/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** The strstr function searches within the string pointed to by s1
** for the string pointed to by s2. It returns a pointer to the
** first occurrence in s1 of s2.
*/


// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Classic no "if, else, while, for"  recursive implementation

// #include <stdbool.h>
// #include <stddef.h>

// #include "my.h"

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
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------







// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// No "ternary, if, else, while, for"  recursive implementation
// #include <stdint.h>

// char *r1_my_strstr(char *str , char *to_find, int size_of_to_find, char *is_str_valid);
// char *r2_my_strstr(char *str , char *to_find, int size_of_to_find, char *is_str_valid);

// char *return_null(char *, char *, int, char *)
// {
//     return NULL;
// };

// char *return_str(char *str , char *, int, char *)
// {
//     return str - 1;
// };

// char *r2_my_strstr(char *str , char *to_find, int size_of_to_find, char *)
// {
//     return (char *(*[])(char *, char *, int, char *)){return_str, r1_my_strstr}[!!my_strncmp(str, to_find, size_of_to_find)](str+1, to_find, size_of_to_find, NULL);
// }

// char *r1_my_strstr(char *str , char *to_find, int size_of_to_find)
// {
//     return (char *(*[])(char *, char *, int)){return_null, r2_my_strstr}[!!*str](str, to_find, size_of_to_find);
// }

// __attribute__((nonnull))
// char *my_strstr(char *str , char *to_find)
// {
//     return (char *(*[])(char *, char *, int, char *)){return_str, r1_my_strstr}[!!*to_find](str + !*to_find, to_find, my_strlen(to_find), NULL);
// }
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------










// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// No "ptr on func, ternary, if, else, while, for" recursive implementation

#include <stdint.h>
#include <stddef.h>

#include "my.h"

char *r1_my_strstr(char *str , char *to_find, int size_of_to_find, char *is_str_valid);
char *r2_my_strstr(char *str , char *to_find, int size_of_to_find, char *is_str_valid);

char *r2_my_strstr(char *str , char *to_find, int size_of_to_find, char *is_str_valid)
{
    return (!my_strncmp(str, to_find, size_of_to_find) || (intptr_t)(is_str_valid = r1_my_strstr(str + 1, to_find, size_of_to_find, NULL)) * 0) * (intptr_t)str + is_str_valid;
}

char *r1_my_strstr(char *str , char *to_find, int size_of_to_find, char *is_str_valid)
{
    return (!*str || (is_str_valid = r2_my_strstr(str, to_find, size_of_to_find, NULL))) * 0 + is_str_valid;
}

char *my_strstr1(char *str , char *to_find, char *is_str_valid)
{
    return (!*to_find || (intptr_t)(is_str_valid = r1_my_strstr(str + !*to_find, to_find, my_strlen(to_find), NULL)) * 0) * (intptr_t)str + is_str_valid;
}

__attribute__((nonnull))
char *my_strstr(char *str , char *to_find)
{
    return my_strstr1(str, to_find, NULL);
}
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------