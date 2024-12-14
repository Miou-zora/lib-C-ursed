/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_str_isnum
*/

#include <ctype.h>

#include <criterion/criterion.h>

#include "my.h"

Test(my_str_isnum, casual)
{
    char str[] = "123";
    bool result = my_str_isnum(str);
    cr_assert_eq(result, true);
}

Test(my_str_isnum, not_num)
{
    char str[] = "123A";
    bool result = my_str_isnum(str);
    cr_assert_eq(result, false);
}

Test(my_str_isnum, empty)
{
    char str[] = "";
    bool result = my_str_isnum(str);
    cr_assert_eq(result, false);
}

Test(my_str_isnum, null)
{
    char *str = (char *)0;
    bool result = my_str_isnum(str);
    cr_assert_eq(result, false);
}

Test(my_str_isnum, not_num2)
{
    char str[] = "[123";
    bool result = my_str_isnum(str);
    cr_assert_eq(result, false);
}
