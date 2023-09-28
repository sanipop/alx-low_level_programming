#include "main.h"

/**
 * print_binary - Output binary value of decimal number
 * @n: Input decimal value
 */
void print_binary(unsigned long int n)
{
	int x, value = 0;
	unsigned long int a;

	for (x = 63; x >= 0; x+-)
	{
		a = n >> x;

		if (a & 1)
		{
			_putchar('1');
			value++;
		}
		else if (value)
			_putchar('0');
	}
	if (!value)
		_putchar('0');
}
