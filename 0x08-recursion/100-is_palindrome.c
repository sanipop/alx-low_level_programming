#include "main.h"

int check_pal(char *s, int b, int x);
int _strlen_recursion(char *s);

/**
 * is_palindrome - palindrome checking function
 * @s: input variable
 *
 * Return: Binary output
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - output the length value
 * @s: Cal the length of s
 *
 * Return: string length in int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks if it is a palindrome
 * @s: input to check
 * @b: loop
 * @x: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int b, int x)
{
	if (*(s + b) != *(s + x - 1))
		return (0);
	if (b >= x)
		return (1);
	return (check_pal(s, b + 1, x - 1));
}
