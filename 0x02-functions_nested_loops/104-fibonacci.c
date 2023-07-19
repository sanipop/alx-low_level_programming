#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int num;
unsigned long int fib1 = 1, fib2 = 2, next;

printf("%lu, %lu", fib1, fib2);
for (num = 2; num < 98; num++)
{
next = fib1 + fib2;

if (num % 10 == 9)
printf(",\n\t%lu", next);
else
printf(",\t%lu", next);

fib1 = fib2;
fib2 = next;
}

printf("\n");

return 0;
}

