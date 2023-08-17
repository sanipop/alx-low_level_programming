#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - output selected values
 * @format: outline the data types
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *o, *q = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", q, va_arg(list, int));
					break;
				case 'k':
					printf("%s%d", q, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", q, va_arg(list, double));
					break;
				case 's':
					o = va_arg(list, char *);
					if (!o)
						o = "(nil)";
					printf("%s%s", q, o);
					break;
				default:
					k++;
					continue;
			}
			q = ", ";
			k++;
		}
	}

	printf("\n");
	va_end(list);
}
