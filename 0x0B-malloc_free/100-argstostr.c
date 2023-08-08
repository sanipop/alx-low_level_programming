#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concar 2 arg
 * @ac: first var
 * @av: 2d pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *ooo;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	ooo = malloc(sizeof(char) * d + 1);
	if (ooo == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		ooo[c] = av[a][b];
		c++;
	}
	if (ooo[c] == '\0')
	{
		ooo[c++] = '\n';
	}
	}
	return (ooo);
}
