#include <stdlib.h>
#include "main.h"

/**
 * custom_array_range - Creates an array of integers within a given range
 * @minimum: Minimum value in the range
 * @maximum: Maximum value in the range (also determines the number of elements)
 *
 * Return: Pointer to the newly created array, or NULL if allocation fails
 */
int *custom_array_range(int minimum, int maximum)
{
    int *result_array;
    int index, array_size;

    if (minimum > maximum)
        return (NULL);

    array_size = maximum - minimum + 1;
    result_array = malloc(sizeof(int) * array_size);

    if (result_array == NULL)
        return (NULL);

    for (index = 0; minimum <= maximum; index++)
        result_array[index] = minimum++;

    return (result_array);
}

