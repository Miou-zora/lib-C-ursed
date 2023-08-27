/*
** EPITECH PROJECT, 2023
** lib-C-ursed [WSL : Ubuntu]
** File description:
** test_data_to_array_str
*/

#include <criterion/criterion.h>

char **data_to_array_str(char *new, char *sep);

Test(data_to_array_str, null_null)
{
    char **result = data_to_array_str(NULL, NULL);

    cr_assert_null(result);
}

Test(data_to_array_str, null_value)
{
    char *sep_value = "test";
    char **result = data_to_array_str(NULL, sep_value);

    cr_assert_null(result);
}

Test(data_to_array_str, value_null)
{
    char *new_value = "test";
    char **result = data_to_array_str(new_value, NULL);

    cr_assert_null(result);
}

Test(data_to_array_str, casual)
{
    char *new_value = "test1;test2;test3";
    char *sep_value = ";";
    char **result = data_to_array_str(new_value, sep_value);
    char *expected[] = {"test1", "test2", "test3", NULL};

    cr_assert_not_null(result);
    for (int i = 0; expected[i]; i++)
        cr_assert_str_eq(result[i], expected[i]);
    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);
}

Test(data_to_array_str, no_separator)
{
    char *new_value = "test1test2test3";
    char *sep_value = ";";
    char **result = data_to_array_str(new_value, sep_value);
    char *expected[] = {"test1test2test3", NULL};

    cr_assert_not_null(result);
    for (int i = 0; expected[i]; i++)
        cr_assert_str_eq(result[i], expected[i]);
    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);
}

Test(data_to_array_str, empty_new)
{
    char *new_value = "";
    char *sep_value = ";";
    char **result = data_to_array_str(new_value, sep_value);
    char *expected[] = {NULL};

    cr_assert_not_null(result);
    cr_assert_null(result[0]);
    free(result);
}

Test(data_to_array_str, empty_sep)
{
    char *new_value = "test1;test2;test3";
    char *sep_value = "";
    char **result = data_to_array_str(new_value, sep_value);
    char *expected[] = {"test1;test2;test3", NULL};

    cr_assert_not_null(result);
    for (int i = 0; expected[i]; i++)
        cr_assert_str_eq(result[i], expected[i]);
    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);
}

Test(data_to_array_str, empty_empty)
{
    char *new_value = "";
    char *sep_value = "";
    char **result = data_to_array_str(new_value, sep_value);
    char *expected[] = {NULL};

    cr_assert_not_null(result);
    cr_assert_null(result[0]);
    free(result);
}

Test(data_to_array_str, two_different_sep)
{
    char *new_value = "test1;test2.test3/test4";
    char *sep_value = ";.";
    char **result = data_to_array_str(new_value, sep_value);
    char *expected[] = {"test1", "test2", "test3/test4", NULL};

    cr_assert_not_null(result);
    for (int i = 0; expected[i]; i++)
        cr_assert_str_eq(result[i], expected[i]);
    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);
}

Test(data_to_array_str, two_same_sep)
{
    char *new_value = "test1;;;test2;test3;test4";
    char *sep_value = ";;";
    char **result = data_to_array_str(new_value, sep_value);
    char *expected[] = {"test1", "", "", "test2", "test3", "test4", NULL};

    cr_assert_not_null(result);
    for (int i = 0; expected[i]; i++)
        cr_assert_str_eq(result[i], expected[i]);
    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);
}

Test(data_to_array_str, sep_at_start)
{
    char *new_value = ";test1;test2;test3";
    char *sep_value = ";";
    char **result = data_to_array_str(new_value, sep_value);
    char *expected[] = {"", "test1", "test2", "test3", NULL};

    cr_assert_not_null(result);
    for (int i = 0; expected[i]; i++)
        cr_assert_str_eq(result[i], expected[i]);
    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);
}

Test(data_to_array_str, sep_at_end)
{
    char *new_value = "test1;test2;test3;";
    char *sep_value = ";";
    char **result = data_to_array_str(new_value, sep_value);
    char *expected[] = {"test1", "test2", "test3", "", NULL};

    cr_assert_not_null(result);
    for (int i = 0; expected[i]; i++)
        cr_assert_str_eq(result[i], expected[i]);
    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);
}
