/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_str_isupper
*/

#include <criterion/criterion.h>

#include "my.h"

Test(my_str_isupper, casual)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    bool result = my_str_isupper(str);
    cr_assert_eq(result, true);
}

Test(my_str_isupper, not_upper)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZa";
    bool result = my_str_isupper(str);
    cr_assert_eq(result, false);
}

Test(my_str_isupper, empty)
{
    char str[] = "";
    bool result = my_str_isupper(str);
    cr_assert_eq(result, true);
}

Test(my_str_isupper, null)
{
    char *str = (char *)0;
    bool result = my_str_isupper(str);
    cr_assert_eq(result, false);
}

Test(my_str_isupper, not_upper2)
{
    char str[] = "[";
    bool result = my_str_isupper(str);
    cr_assert_eq(result, false);
}