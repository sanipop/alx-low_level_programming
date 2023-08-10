#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - FUNCTIONS to reallocate memory 
 * @ptr: old mem address 
 * @old_size: old size of pointer
 * @new_size: new size of variable 
 *
 * Return: change pointer to new address 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *fist_pointer;
	char *second_pointer;
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

	fist_pointer = malloc(new_size);
	if (!fist_pointer)
		return (NULL);

	second_pointer = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			fist_pointer[x] = second_pointer[i];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			fist_pointer[x] = second_pointer[x];
	}

	free(ptr);
	return (fist_pointer);
}

