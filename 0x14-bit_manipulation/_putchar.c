#include "main.h"
#include <unistd.h>
/**
 * _putchar - output c to stdout
 * @c: output character t
 *
 * Return: output success.
 * On error, Return value of error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
