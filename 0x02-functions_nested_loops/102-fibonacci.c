#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int num;
long int fib1 = 1, fib2 = 2, next;

printf("%ld, %ld", fib1, fib2);

for (num = 2; num < 50; num++)
{
next = fib1 + fib2;
printf(", %ld", next);

fib1 = fib2;
fib2 = next;
}

printf("\n");

return 0;
}

