/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** A function that capitalizes the first letter of each word.
*/

#include <stdbool.h>

__attribute__((const))
bool char_isupper(char c);
__attribute__((const))
bool char_islower(char c);
__attribute__((const))
bool char_isupper(char c);
__attribute__((const))
bool char_isnum(char c);
__attribute__((const))
bool char_isan(char c);
__attribute__((const))
bool char_isalpha(char c);


char *r1_my_strcapitalize(char *str)
{
    return
    *str && *(str - 1) ?
        char_isalpha(*(str - 1)) ?
            char_isupper(*str) && char_isupper(*(str - 1)) ?
                (*str += 'a' - 'A') * 0 + r1_my_strcapitalize(str + 1) - 1
            : char_islower(*(str - 1)) && char_isupper(*str) ?
                (*str += 'a' - 'A') * 0 + r1_my_strcapitalize(str + 1) - 1
            :
                r1_my_strcapitalize(str + 1) - 1
        : char_islower(*str) ?
            (*str -= 'a' - 'A') * 0 + r1_my_strcapitalize(str + 1) - 1
        :
            r1_my_strcapitalize(str + 1) - 1
    :
        str;
}

char *my_strcapitalize(char *str)
{
    return
    !str ?
        str
    : char_islower(str[0]) ?
        (str[0] -= 'a' - 'A') * 0 + r1_my_strcapitalize(str + 1) - 1
    :
        r1_my_strcapitalize(str + 1) - 1;
}
