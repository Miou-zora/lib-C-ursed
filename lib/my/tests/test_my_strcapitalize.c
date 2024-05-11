#include <criterion/criterion.h>

char *my_strcapitalize(char *str);
char *my_strdup(char const *src);
void *my_calloc(int elem_count, int elem_size);

Test(my_strcapitalize, casual)
{
    char *str_result = my_strdup("hello, world!");
    char *str_expected = "Hello, World!";
    cr_assert_str_eq(my_strcapitalize(str_result), str_expected);
}

Test(my_strcapitalize, null)
{
    cr_assert_eq(my_strcapitalize(NULL), NULL);
}

Test(my_strcapitalize, empty)
{
    char *str_result = my_strdup("");
    char *str_expected = "";
    cr_assert_str_eq(my_strcapitalize(str_result), str_expected);
}

Test(my_strcapitalize, all_upper)
{
    char *str_result = my_strdup("HELLO, WORLD!");
    char *str_expected = "Hello, World!";
    cr_assert_str_eq(my_strcapitalize(str_result), str_expected);
}

Test(my_strcapitalize, all_lower)
{
    char *str_result = my_strdup("hello, world!");
    char *str_expected = "Hello, World!";
    cr_assert_str_eq(my_strcapitalize(str_result), str_expected);
}

Test(my_strcapitalize, all_upper_and_lower)
{
    char *str_result = my_strdup("HELLO, world!");
    char *str_expected = "Hello, World!";
    cr_assert_str_eq(my_strcapitalize(str_result), str_expected);
}

Test(my_strcapitalize, all_upper_and_lower_and_num)
{
    char *str_result = my_strdup("HELLO, world! 123");
    char *str_expected = "Hello, World! 123";
    cr_assert_str_eq(my_strcapitalize(str_result), str_expected);
}

Test(my_strcapitalize, all_upper_and_lower_and_num_and_special)
{
    char *str_result = my_strdup("HELLO, world! 123 @");
    char *str_expected = "Hello, World! 123 @";
    cr_assert_str_eq(my_strcapitalize(str_result), str_expected);
}

Test(my_strcapitalize, all_upper_and_lower_and_num_and_special_and_space)
{
    char *str_result = my_strdup("HELLO, world! 123 @ ");
    char *str_expected = "Hello, World! 123 @ ";
    cr_assert_str_eq(my_strcapitalize(str_result), str_expected);
}
