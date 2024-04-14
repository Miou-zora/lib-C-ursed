/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_str_isalpha
*/

#include <criterion/criterion.h>

bool my_str_isalpha(char const *str);

Test(my_str_isalpha, casual)
{
    {
        char str[] = "abAZAc";
        bool result = my_str_isalpha(str);
        cr_assert_eq(result, true);
    }
    {
        char str[] = "z";
        bool result = my_str_isalpha(str);
        cr_assert_eq(result, true);
    }
    {
        char str[] = "a";
        bool result = my_str_isalpha(str);
        cr_assert_eq(result, true);
    }
    {
        char str[] = "Z";
        bool result = my_str_isalpha(str);
        cr_assert_eq(result, true);
    }
    {
        char str[] = "A";
        bool result = my_str_isalpha(str);
        cr_assert_eq(result, true);
    }
}

Test(my_str_isalpha, null)
{
    bool result = my_str_isalpha(NULL);
    cr_assert_eq(result, false);
}

Test(my_str_isalpha, empty_str)
{
    char str[] = "";
    bool result = my_str_isalpha(str);
    cr_assert_eq(result, true);
}

Test(my_str_isalpha, false)
{
    {
        char str[] = "abZAEc1";
        bool result = my_str_isalpha(str);
        cr_assert_eq(result, false);
    }
    {
        char str[] = "1aazebc";
        bool result = my_str_isalpha(str);
        cr_assert_eq(result, false);
    }
    {
        char str[] = "1";
        bool result = my_str_isalpha(str);
        cr_assert_eq(result, false);
    }
}