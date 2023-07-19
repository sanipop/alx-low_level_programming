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

    printf("%lu", fib1);

    for (num = 1; num < 98; num++)
    {
        // Special case to print the second Fibonacci number
        if (num == 1)
            printf(", %lu", fib2);
        else
        {
            next = fib1 + fib2;
            printf(", %lu", next);

            fib1 = fib2;
            fib2 = next;
        }
    }

    printf("\n");

    return 0;
}

