#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - make duplicate mem location
 * @str: pointer
 * Return: 0
 */
char *_strdup(char *str)
{
	char *b;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	b = malloc(sizeof(char) * (x + 1));

	if (b == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		b[y] = str[y];

	return (b);
}
