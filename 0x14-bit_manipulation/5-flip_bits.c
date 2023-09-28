#include "main.h"

/**
 * flip_bits - the numbers to flip
 * @n: Input 1
 * @m: Input 2
 *
 * Return: conunt of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, j = 0;
	unsigned long int x;
	unsigned long int y = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		x = y >> b;
		if (x & 1)
			j++;
	}

	return (j);
}
