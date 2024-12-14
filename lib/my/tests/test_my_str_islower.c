/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_str_islower
*/

#include <criterion/criterion.h>

#include "my.h"

Test(my_str_islower, casual)
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    bool result = my_str_islower(str);
    cr_assert_eq(result, true);
}

Test(my_str_islower, not_lower)
{
    char str[] = "abcdefghijklmnopqrstuvwxyzA";
    bool result = my_str_islower(str);
    cr_assert_eq(result, false);
}

Test(my_str_islower, empty)
{
    char str[] = "";
    bool result = my_str_islower(str);
    cr_assert_eq(result, true);
}

Test(my_str_islower, null)
{
    char *str = (char *)0;
    bool result = my_str_islower(str);
    cr_assert_eq(result, false);
}

Test(my_str_islower, not_lower2)
{
    char str[] = "[";
    bool result = my_str_islower(str);
    cr_assert_eq(result, false);
}
