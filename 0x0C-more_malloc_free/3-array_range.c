#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that makes an array
 * @min: strat
 * @max: end
 *
 * Return: new mem add
 */
int *array_range(int min, int max)
{
	int *pointer;
	int x, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	pointer = malloc(sizeof(int) * range);

	if (pointer == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pointer[x] = min++;

	return (pointer);
}

