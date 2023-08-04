#include <stdio.h>
#include "main.h"

/**
 * main - Outputs the number of Argument
 * @argc: input argument counts
 * @argv: input argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
