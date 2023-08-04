#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, y, z, a, b, c;

	x = 0;
	y = 0;
	z = 0;
	a = 0;
	b = 0;
	c = 0;

	while (s[a] != '\0')
		a++;

	while (x < a && b == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			c = s[x] - '0';
			if (y % 2)
				c = -c;
			z = z * 10 + c;
			b = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			b = 0;
		}
		x++;
	}

	if (b == 0)
		return (0);

	return (z);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
