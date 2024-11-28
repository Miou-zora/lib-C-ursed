#include <string.h>

#include <criterion/criterion.h>

char *my_strstr(const char *, const char *);

#define CHECK_SAME(str, to_find) cr_assert_eq(my_strstr(str, to_find), strstr(str, to_find))

Test(my_strstr, casual)
{
    char str[] = "Hello World!";
    char to_find[] = "World";

    CHECK_SAME(str, to_find);
}

Test(my_strstr, no_word_found)
{
    char str[] = "Hello World!";
    char to_find[] = "Foo";

    CHECK_SAME(str, to_find);
}

Test(my_strstr, many_word)
{
    char str[] = "Hello World! World!";
    char to_find[] = "World";

    CHECK_SAME(str, to_find);
}

Test(my_strstr, nothing_first_param)
{
    char str[] = "";
    char to_find[] = "Foo";

    CHECK_SAME(str, to_find);
}

Test(my_strstr, nothing_second_param)
{
    char str[] = "Hello World!";
    char to_find[] = "";

    CHECK_SAME(str, to_find);
}

Test(my_strstr, nothing)
{
    char str[] = "";
    char to_find[] = "";

    CHECK_SAME(str, to_find);
}