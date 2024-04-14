/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_str_isan
*/

#include <criterion/criterion.h>

bool my_str_isan(char const *str);

Test(my_str_isan, casual)
{
    char str[] = "a1A";
    bool result = my_str_isan(str);
    cr_assert_eq(result, true);
}

Test(my_str_isan, null)
{
    bool result = my_str_isan(NULL);
    cr_assert_eq(result, false);
}

Test(my_str_isan, empty_str)
{
    char str[] = "";
    bool result = my_str_isan(str);
    cr_assert_eq(result, true);
}

Test(my_str_isan, false)
{
    {
        char str[] = "a1A!";
        bool result = my_str_isan(str);
        cr_assert_eq(result, false);
    }
    {
        char str[] = "-e1aazebc";
        bool result = my_str_isan(str);
        cr_assert_eq(result, false);
    }
    {
        char str[] = "-";
        bool result = my_str_isan(str);
        cr_assert_eq(result, false);
    }
}
