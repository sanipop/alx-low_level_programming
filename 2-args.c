#include <stdio.h>
#include "main.h"

/**
 * main - Outputs all input argument
 * @argc: count of argument it receive
 * @argv: input array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
