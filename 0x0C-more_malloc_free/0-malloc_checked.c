#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -function for allocating memory
 * @b: size to allocate
 *
 * Return: mem address alocated
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}

