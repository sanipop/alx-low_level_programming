#include "main.h"

/**
 * binary_to_uint - fUNCTION TO OUT decimal equivalent of a binary
 * @b: input binary as string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decNum = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decNuml = 2 * decNum + (b[x] - '0');
	}

	return (decNum);
}
