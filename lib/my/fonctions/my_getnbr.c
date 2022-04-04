/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** my_getnbr
*/

void first_numberf(char const *str, long long *index, long long *neg)
{
    while (!(str[*index] >= '0' && str[*index] <= '9') && str[*index] != 0) {
        if (str[*index] == '-') {
            *neg = 1;
        } else {
            *neg = 0;
        }
        *index = *index + 1;
    }
}

void transform_ifneg(long long *number, long long neg)
{
    if (neg == 1) {
        *number = - *number;
    }
}

long long my_getnbr(char const *str)
{
    long long index = 0;
    long long number = 0;
    long long neg = 0;

    first_numberf(str, &index, &neg);
    while (str[index] >= 48 && str[index] <= 57) {
        number = number * 10 + str[index] - '0';
        index = index + 1;
    }
    if (!str[index] && number == 0) {
        return (-1);
    }
    transform_ifneg(&number, neg);
    return number;
}
