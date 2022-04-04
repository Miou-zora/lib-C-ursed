/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** A function that counts and returns the number of
** characters found in the string passed as parameter.
*/

void my_putchar(char);

int my_strlen(char const *str)
{
    int index = 0;
    while (str[index] != '\0') {
        index = index + 1;
    }
    return (index);
}
