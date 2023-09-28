#include "main.h"

/**
 * set_bit - Function to change index
 * @n: index of the value to change
 * @index: Position to change to1
 *
 * Return: Output 1 for Success and -1 for Failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
