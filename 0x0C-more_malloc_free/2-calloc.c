#include <stdlib.h>
#include "main.h"

/**
 * *_memset - FILLS out a source
 * @s: destination 
 * @b: char to copy
 * @n: size
 *
 * Return: pointer output
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - array variable builder
 * @nmemb: size of array
 * @size: individual size
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}

