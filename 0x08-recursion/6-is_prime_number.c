#include "main.h"

int actual_prime(int n, int b);

/**
 * is_prime_number - 1 or 0 value of a prime number
 * @n: Input Value
 *
 * Return: Binary resulut of prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (recussion(n, n - 1));
}

/**
 * recussion - Evaluate the to if prime
 * @n: input variable
 * @b: loop
 *
 * Return: Binary output of prime number
 */
int recussion(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 && b > 0)
		return (0);
	return (recussion(n, b - 1));
}
