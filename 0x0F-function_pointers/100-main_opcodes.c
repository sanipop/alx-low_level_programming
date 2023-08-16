#include <stdio.h>
	#include <stdlib.h>


	/**
	 * main - outputs opscode
	 * @argc: array count
	 * @argv: arrays input from std in
	 *
	 * Return: Always 0 (Success)
	 */
	int main(int argc, char *argv[])
	{
		int bytes, k;
		char *a;


		if (argc != 2)
		{
			printf("Error\n");
			exit(1);
		}


		bytes = atoi(argv[1]);


		if (bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}


		a = (char *)main;


		for (k = 0; k < bytes; k++)
		{
			if (k == bytes - 1)
			{
				printf("%02hhx\n", a[k]);
				break;
			}
			printf("%02hhx ", a[k]);
		}
		return (0);
	}
