#include "main.h"

int recursion(int n, int i);

/**
 * _sqrt_recursion - Function returning the integer value of the squaare root
 * @n: the input number to calculate  the square root
 *
 * Return: Output the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recursion(n, 0));
}

/**
 * recursion - recurses to find the natural
 * @n: input variable to cal its root
 * @b: loop
 *
 * Return: the resulting square root
 */
int recursion(int n, int b)
{
	if (b * b > n)
		return (-1);
	if (b * b == n)
		return (b);
	return (recursion(n, b + 1));
}
