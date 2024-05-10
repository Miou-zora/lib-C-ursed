#include <criterion/criterion.h>

char *my_strcpy(char *dest , char const *src);

Test(my_strcpy, casual)
{
    char dest[4];
    char src[] = "abc";
    char *result = my_strcpy(dest, src);
    cr_assert_str_eq(result, "abc");
}

Test(my_strcpy, null)
{
    char dest[4];
    char *result = my_strcpy(dest, NULL);
    cr_assert_eq(result, dest);
}
