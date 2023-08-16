#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - loops print in each element in a newline
 * @array: input array
 * @size: no of element to send to std out
 * @action: pointer to decide output formats
 * Return: void
 * Description: This function iterates through each element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;


	if (array == NULL || action == NULL)
		return;


	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}

