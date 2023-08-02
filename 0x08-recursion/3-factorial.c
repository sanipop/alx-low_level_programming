#include "main.h"

/**
 * factorial - Function to calculate facrotia
 * @n: input number to calculate its factoria
 *
 * Return: Integegr reprwsentation of the factoria
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
