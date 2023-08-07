#include "main.h"
#include <stdlib.h>
/**
 * create_array - ASSIGN c to Array of length 
 * @lenght: array LENGHT
 * @c: Input character
 * Description: Assign c to array of lenght
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int lenght, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * lenght);
	if  lenght( == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}

