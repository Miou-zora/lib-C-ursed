/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** A function that returns the square root (if it is a whole number)
** of the number given as argument.
*/

int my_compute_square_root(int nb)
{
    int square_root = 0;

    while (square_root * square_root <= nb) {
        if (square_root * square_root == nb)
            return (square_root);
        square_root = square_root + 1;
    }
    return (0);
}
