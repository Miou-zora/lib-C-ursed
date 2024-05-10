#include <criterion/criterion.h>

__attribute__((const, nonnull))
int my_strcmp(char const *s1 , char const *s2);

Test(my_strcmp, casual)
{
    char s1[] = "abc";
    char s2[] = "abc";
    int result = my_strcmp(s1, s2);
    int expected = strcmp(s1, s2);
    cr_assert_eq(result, expected);
}

Test(my_strcmp, casual_2)
{
    char s1[] = "abc";
    char s2[] = "abd";
    int result = my_strcmp(s1, s2);
    int expected = strcmp(s1, s2);
    cr_assert_eq(result, expected);
}

Test(my_strcmp, casual_3)
{
    char s1[] = "abc";
    char s2[] = "aba";
    int result = my_strcmp(s1, s2);
    int expected = strcmp(s1, s2);
    cr_assert_eq(result, expected);
}

Test(my_strcmp, first_longer)
{
    char s1[] = "abc";
    char s2[] = "ab";
    int result = my_strcmp(s1, s2);
    int expected = strcmp(s1, s2);
    printf("%i %i\n", result, expected);
    cr_assert_eq(result, expected);
}

Test(my_strcmp, second_longer)
{
    char s1[] = "ab";
    char s2[] = "abc";
    int result = my_strcmp(s1, s2);
    int expected = strcmp(s1, s2);
    printf("%i %i\n", result, expected);
    cr_assert_eq(result, expected);
}
