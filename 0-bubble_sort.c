#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 *               Bubble Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;

    for (i = 0; i < size; i++)
        for (j = 0; j < size - 1; j++)
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
            }
}

