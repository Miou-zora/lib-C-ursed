/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** A function that returns the square root (if it is a whole number)
** of the number given as argument.
*/

int get_square_root(int para[2])
{
    return (
    (para[0] * para[0] > para[1]) ?
        para[0] - 1
    : (para[0] * para[0] == para[1]) ?
        para[0]
    :
        get_square_root((int[]){para[0] + 1, para[1]}));
}

int my_compute_square_root(int nb)
{ 
    return (
    (nb < 0) ?
        -1
    :
        get_square_root((int[]){0, nb}));
}
