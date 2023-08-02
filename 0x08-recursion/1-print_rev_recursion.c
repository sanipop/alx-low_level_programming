#include "main.h"
/**
 * _print_rev_recursion - Output the string in reverse
 * @s: The input vaariable
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
