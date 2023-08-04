#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Output the minimun number
 * modify the ammount
 * @argc: count of input
 * @argv: input array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	z = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && x >= 0; y++)
	{
		while (x >= coins[y])
		{
			result++;
			x -= coins[y];
		}
	}

	printf("%d\n", result);
	return (0);
}
