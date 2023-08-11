#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string source
 * @s2: string destination
 * @n: count of string to move
 *
 * Return: output array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *q;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	if (n < y)
		q = malloc(sizeof(char) * (x + n + 1));
	else
		q = malloc(sizeof(char) * (x + y + 1));

	if (!q)
		return (NULL);

	while (i < x)
	{
		q[i] = s1[i];
		i++;
	}

	while (n < y && i < (x + n))
		q[i++] = s2[j++];

	while (n >= y && i < (x + y))
		q[i++] = s2[j++];

	q[i] = '\0';

	return (q);
}

