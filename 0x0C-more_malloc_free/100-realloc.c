#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - change memory array block
 * @ptr: old array
 * @old_size: prev size
 * @new_size: new size
 *
 * Return: new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *old_pointer;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);

	old_pointer = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			pointer1[x] = old_pointer[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			pointer1[x] = old_pointer[x];
	}

	free(ptr);
	return (pointer1);
}

