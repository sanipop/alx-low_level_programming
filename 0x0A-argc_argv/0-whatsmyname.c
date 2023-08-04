#include <stdio.h>
#include "main.h"

/**
 * main - outputs  program name
 * @argc: count input argument
 * @argv: input array
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
