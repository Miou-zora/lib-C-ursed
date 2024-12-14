/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_str_isupper
*/

#include <criterion/criterion.h>

#include "my.h"

Test(my_strdup, casual)
{
    char str[] = "Hello World!";
    char *result = my_strdup(str);
    cr_assert_str_eq(result, str);
    free(result);
}

Test(my_strdup, empty)
{
    char str[] = "";
    char *result = my_strdup(str);
    cr_assert_str_eq(result, str);
    free(result);
}

Test(my_strdup, null)
{
    char *str = (char *)0;
    char *result = my_strdup(str);
    cr_assert_eq(result, (char *)0);
}
