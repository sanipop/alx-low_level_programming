#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to find its index
 * @index: bit location
 *
 * Return: output of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_output;

	if (index > 63)
		return (-1);

	bit_output = (n >> index) & 1;

	return (bit_output);
}
