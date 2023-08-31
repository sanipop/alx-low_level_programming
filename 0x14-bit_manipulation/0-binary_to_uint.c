#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if there are invalid characters in the string.
 */
unsigned int binary_to_uint(const char *b)
{
	int idx;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (idx = 0; b[idx]; idx++)
	{
		if (binary[idx] < '0' || b[idx] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[idx] - '0');
	}

	return (decimal_value);
}
