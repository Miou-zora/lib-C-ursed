/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_str_without_char_array
*/

#include <criterion/criterion.h>

#include "my.h"

// A function that returns the string without all space and malloc it.
// char *my_str_without_char_array(char *str_given, char *array)

Test(my_str_without_char_array, pos_pos_lesser)
{
    char *result = my_str_without_char_array("Hello World", " ");
    char *expected = "HelloWorld";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_char_array, pos_pos_upper)
{
    char *result = my_str_without_char_array("Hello World", "o");
    char *expected = "Hell Wrld";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_char_array, pos_neg_lesser)
{
    char *result = my_str_without_char_array("Hello World", "H");
    char *expected = "ello World";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_char_array, multiple_char)
{
    char *result = my_str_without_char_array("Hello World", "Helo");
    char *expected = " Wrd";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_char_array, empty_array)
{
    char *result = my_str_without_char_array("Hello World", "");
    char *expected = "Hello World";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_char_array, empty_str)
{
    char *result = my_str_without_char_array("", "Helo");
    char *expected = "";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_char_array, empty_str_and_array)
{
    char *result = my_str_without_char_array("", "");
    char *expected = "";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_char_array, null_str)
{
    char *result = my_str_without_char_array(NULL, "Helo");
    char *expected = NULL;

    cr_assert_eq(result, expected);
}

Test(my_str_without_char_array, null_array)
{
    char *result = my_str_without_char_array("Hello World", NULL);
    char *expected = "Hello World";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_char_array, null_str_and_array)
{
    char *result = my_str_without_char_array(NULL, NULL);
    char *expected = NULL;

    cr_assert_eq(result, expected);
}