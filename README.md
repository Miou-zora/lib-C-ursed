# lib C ursed

The goal of this project is to try to reach limit of ternary and recursive functions of the libmy (Epitech Small C Pool LibC).

If possible, this Lib C allows anyone who doesn't like Coding Style to do as they see fit.
It is still not recommended to use it for people who are not experienced in C, in ternary and recursive functions.

## Example

```c
void *my_memset(void *ptr, unsigned long long data, unsigned long long size)
{
    return
    (size--) ?
        my_memset(ptr, (((char *)ptr)[size] = data), size)
    :
        ptr;
}
```
As you can see, the function is written in a single line, with a ternary operator and a recursive call. I have also created some coding style rules to make the code more readable which are:
- Start the function with a return
- Use ternary as if-like statement

You can find some honorable mentions [here](#honorable-mentions).

## Functions

Created        | Tested         | Name
---------------|----------------|-------
🟩 | 🟩 | data_to_array_str (partially)
🟩 | 🟩 | data_to_array_str (partially)
🟩 | 🟩 | get_nbrlen
🟩 | 🟩 | my_abs
🟩 | 🟩 | my_calloc
🟩 | 🟩 | my_compute_power_rec
🟩 | 🟩 | my_compute_square_root
🟥 | 🟥 | my_convert_base (partially)
🟩 | 🟩 | my_find_prime_sup
🟥 | 🟥 | my_fputthat
🟩 | 🟩 | my_getnbr (une pepite)
🟩 | 🟩 | my_is_prime
🟩 | 🟩 | my_isneg
🟩 | 🟩 | my_max
🟩 | 🟩 | my_memset
🟩 | 🟩 | my_min
🟥 | 🟥 | my_printf
🟩 | 🟩 | my_put_nbr
🟩 | 🟩 | my_putchar
🟩 | 🟩 | my_putstr
🟩 | 🟩 | my_revstr
🟥 | 🟥 | my_showmem (to create)
🟥 | 🟥 | my_showstr (to create)
🟥 | 🟥 | my_sort_int_array
🟩 | 🟩 | my_str_isalpha
🟩 | 🟩 | my_str_isan
🟩 | 🟥 | my_str_islower
🟩 | 🟥 | my_str_isnum
🟩 | 🟥 | my_str_isprintable
🟩 | 🟥 | my_str_isupper
🟥 | 🟥 | my_str_without_char_array
🟥 | 🟥 | my_str_without_space
🟩 | 🟩 | my_strcapitalize
🟩 | 🟩 | my_strcat
🟩 | 🟩 | my_strcmp
🟩 | 🟩 | my_strcpy
🟩 | 🟥 | my_strdup
🟩 | 🟩 | my_strlen
🟩 | 🟩 | my_strlowcase
🟥 | 🟥 | my_strncat
🟥 | 🟥 | my_strncmp
🟥 | 🟥 | my_strncpy
🟩 | 🟩 | my_strstr (special case: no ternary, ptr on func, if, else, while, for recursive implementation)
🟩 | 🟩 | my_strupcase
🟩 | 🟥 | my_swap
🟥 | 🟥 | myf_putbase

## Honorable mentions

- [my_calloc](https://github.com/Miou-zora/lib-C-ursed/blob/6a611900b5271a5a32833514a0fb8db560f28ea3/lib/my/fonctions/my_calloc.c): cast a function that use void as return value to use it in a ternary operator.
- [my_swap](https://github.com/Miou-zora/lib-C-ursed/blob/6a611900b5271a5a32833514a0fb8db560f28ea3/lib/my/fonctions/my_swap.c): use XOR operator to swap two values.
- [data_to_array_str](https://github.com/Miou-zora/lib-C-ursed/blob/6a611900b5271a5a32833514a0fb8db560f28ea3/lib/my/fonctions/data_to_array_str.c) and [my_convert_base](https://github.com/Miou-zora/lib-C-ursed/blob/6a611900b5271a5a32833514a0fb8db560f28ea3/lib/my/fonctions/my_convert_base.c): biggests functions I've done.
- [my_strstr](https://github.com/Miou-zora/lib-C-ursed/blob/6a611900b5271a5a32833514a0fb8db560f28ea3/lib/my/fonctions/my_strstr.c): no "ptr on func, ternary, if, else, while, for" recursive implementation