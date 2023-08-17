#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - send string to std out per line
 * @separator: string used to devide words
 * @n: string count .
 * @...: Arguments for variable input.
 *
 * Description: condition check for count.
 *  output ni empty count.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *x;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		x = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", x);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
