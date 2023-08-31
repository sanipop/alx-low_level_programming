#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bits needed to flip to get from n to m.
 * @n: The source number.
 * @m: The target number.
 *
 * Return: The number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int X, Y = 0;
	unsigned long int Z;
	unsigned long int A = n ^ m;

	for (X = 63; X >= 0; X--)
	{
		Z = A >> X;
		if (Z & 1)
			Y++;
	}

	return (Y);
}
