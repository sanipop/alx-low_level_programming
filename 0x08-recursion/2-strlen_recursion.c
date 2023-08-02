#include "main.h"
/**
 * _strlen_recursion - Returns strring length as output
 * @s: the input to which its length is to be measured.
 *
 * Return: A integer value of the string.
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}
