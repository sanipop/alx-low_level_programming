#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if there are invalid characters in the string.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;
	unsigned int bit_value = 1;

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += (b[i] - '0') * bit_value;
		bit_value *= 2;
	}

	return (result);
}
