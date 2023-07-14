#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
int first_num = i % 10;
int second_num = j % 10;

if (i / 10 < second_num || (i / 10 == second_num && first_num < j / 10))
			{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');

if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return 0;
}

