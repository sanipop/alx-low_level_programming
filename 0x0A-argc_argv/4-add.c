#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: Input array
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declarations*/
	unsigned int x;

	x = 0;
	while (x < strlen(str)) /*count string*/

	{
		if (!isdigit(str[x])) /*check if str there are digit*/
		{
			return (0);
		}

		x++;
	}
	return (1);
}

/**
 * main - outputs the program name
 * @argc: numbers of input
 * @argv: inputs
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declearations*/
	int x;
	int str_to_int;
	int sum = 0;

	x = 1;
	while (x < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[x]))

		{
			str_to_int = atoi(argv[x]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		x++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

