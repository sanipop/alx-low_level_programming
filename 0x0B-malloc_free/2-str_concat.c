#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: first var to join
 * @s2: second var to be join
 * Return: output s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	a = malloc(sizeof(char) * (x + y + 1));

	if (a == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		a[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		a[x] = s2[y];
		x++, y++;
	}
	a[x] = '\0';
	return (a);
}
