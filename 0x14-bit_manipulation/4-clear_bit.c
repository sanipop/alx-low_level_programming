#include "main.h"

/**
 * clear_bit - Conver value to zero
 * @n: Number to change
 * @index: Valure to chaange
 *
 * Return: output 1 for success and and -1 for Failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
