#include "search_algos.h"

/**
 * linear_search - Array search function
 *
 *
 * @array: the array to searches, point at the first element
 * @size: the size of array to be searched
 * @value: value to besearched for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
