/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** The strstr function searches within the string pointed to by s1
** for the string pointed to by s2. It returns a pointer to the
** first occurrence in s1 of s2.
*/

char *my_strstr(char *str , char const *to_find)
{
    int index;
    int carac;

    for (index = 0; str[index] != '\0'; index++) {
        carac = 0;
        while (str[index + carac] == to_find[carac]) {
            carac += 1;
        }
        if (to_find[carac] == '\0') {
            return &str[index];
        }
    }
    return ('\0');
}
