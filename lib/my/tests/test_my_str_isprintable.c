/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_str_isprintable
*/

#include <ctype.h>

#include <criterion/criterion.h>

#include "my.h"

Test(my_str_isprintable, casual1)
{
    char str[] = " ";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, casual2)
{
    char str[] = "!";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, casual3)
{
    char str[] = "a";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, casual4)
{
    char str[] = "\n";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, casual5)
{
    char str[] = "\t";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, casual6)
{
    char str[] = "\r";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, casual7)
{
    char str[] = "A";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, casual8)
{
    char str[] = "1";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, casual9)
{
    char str[] = "~";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, not_printable)
{
    char str[] = "\a";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, false);
}

Test(my_str_isprintable, empty)
{
    char str[] = "";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, true);
}

Test(my_str_isprintable, null)
{
    char *str = (char *)0;
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, false);
}

Test(my_str_isprintable, not_printable2)
{
    char str[] = "\b";
    bool result = my_str_isprintable(str);
    cr_assert_eq(result, false);
}
