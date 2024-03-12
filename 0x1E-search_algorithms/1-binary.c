#include "search_algos.h"

/**
 * recursive_search - the search function
 * of the int value using recurssive search
 *
 *
 * @array: The array to be searched
 * @size: the size of array to be searched
 * @value: the value to search ni the array
 * Return: the index of array to return
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - Function calls on the binary search
 * and hence return index
 *
 * @array: the array to be searched
 * @size: the size of array to be searched
 * @value: the value tobe searched for
 * Return: the index value to be returned
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
