#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function performing continous SUM.
 * @n: input sized passed.
 * @...: dynamic variable recieved
 *
 * Return: customized variable 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, z = 0;

	va_start(ap, n);

	for (x = 0; i < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (z);
}

