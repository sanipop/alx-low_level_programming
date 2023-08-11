#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - verify if digit
 * @s: input
 *
 * Return: binary output
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - find str size
 * @s: input
 *
 * Return: str size
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (i);
}

/**
 * errors - error handling
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - product of input
 * @argc: input size
 * @argv: input array
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *q, *r;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	q = argv[1], r = argv[2];
	if (argc != 3 || !is_digit(q) || !is_digit(r))
		errors();
	len1 = _strlen(q);
	len2 = _strlen(r);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = q[len1] - '0';
		carry = 0;
		for (len2 = _strlen(r) - 1; len2 >= 0; len2--)
		{
			digit2 = r[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

