/*
** EPITECH PROJECT, 2021
** my_sort_int_array.c
** File description:
** my_sort_int_array
*/

void my_swap(int *, int *);

void is_max(int *array, int *pos_max, int ac_pos)
{
    if (array[*pos_max] > array[ac_pos]) {
        *pos_max = ac_pos;
    }
}

void my_sort_int_array(int *array , int size)
{
    int max_temp;
    int index2;

    for (int index = 0; index < size; index++) {
        max_temp = index;
        for (index2 = index; index2 < size; index2++) {
            is_max(array, &max_temp, index2);
        }
        my_swap(&(array[index]), &(array[max_temp]));
    }
}
