#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function using pointer to print
 * @name: input character
 * @f: func. to poin4
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;


	f(name);
}
