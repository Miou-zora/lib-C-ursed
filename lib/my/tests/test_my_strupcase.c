#include <criterion/criterion.h>

char *my_strupcase(char *str);
char *my_strdup(char const *src);


Test(my_strupcase, casual)
{
    char *str = my_strdup("[@Hello World!");
    char *result = my_strupcase(str);
    char *expected = "[@HELLO WORLD!";
    cr_assert_str_eq(result, expected);
}

Test(my_strupcase, null)
{
    char *result = my_strupcase(NULL);
    cr_assert_eq(result, NULL);
}
