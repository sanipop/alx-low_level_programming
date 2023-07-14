#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
char num1 = '0';
char num2 = num1 + 1;

while (num1 <= '9')
{
putchar(num1);
num1++;
}

putchar('\n');

return (0);
}

