/*
** EPITECH PROJECT, 2023
** lib-C-ursed [WSL : Ubuntu]
** File description:
** test_my_char_is_that
*/

#include <criterion/criterion.h>
#include <stdbool.h>

bool my_char_is_that(char c, char const *str);

Test(my_char_is_that, basic_true)
{
    char c = 'a';
    char const *str = "abc";
    bool expected = true;

    bool result = my_char_is_that(c, str);

    cr_assert_eq(result, expected);
}

Test(my_char_is_that, basic_false)
{
    char c = 'd';
    char const *str = "abc";
    bool expected = false;

    bool result = my_char_is_that(c, str);

    cr_assert_eq(result, expected);
}

Test(my_char_is_that, empty_str)
{
    char c = 'd';
    char const *str = "";
    bool expected = false;

    bool result = my_char_is_that(c, str);

    cr_assert_eq(result, expected);
}

Test(my_char_is_that, empty_str_true)
{
    char c = '\0';
    char const *str = "";
    bool expected = true;

    bool result = my_char_is_that(c, str);

    cr_assert_eq(result, expected);
}

Test(my_char_is_that, null)
{
    char c = 'd';
    char const *str = NULL;
    bool expected = false;

    bool result = my_char_is_that(c, str);

    cr_assert_eq(result, expected);
}
