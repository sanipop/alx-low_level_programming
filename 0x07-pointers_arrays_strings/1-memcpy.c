#include "main.h"
/**
 *_memcpy - Function used in copying memory area
 *@dest: location for the storage
 *@src: source of the storage
 *@n:  bytes to be stored
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
