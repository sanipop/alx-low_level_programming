#include "main.h"

/**
 * _pow_recursion - calulate the power of x with index y
 * @x: value of the base
 * @y: value of the  exponent
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

