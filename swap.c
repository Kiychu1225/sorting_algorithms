#include <stdio.h>
#include "sort.h"

/**
 * swap - Swaps the values of two variables.
 *
 * @a: The first variable.
 * @b: The second variable.
 * Return: 0
 */
void swap(int *a, int *b)
{
    int tmp;

    tmp = *b;
    *b = *a;
    *a = tmp;
}

