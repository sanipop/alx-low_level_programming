#include "main.h"

/**
 * get_endianness - eidianness check
 * Return: for big 0 and small 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
