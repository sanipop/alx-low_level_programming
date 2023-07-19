#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds the sum of even-valued terms in the Fibonacci sequence
 *              up to a value of 4,000,000, and prints the result.
 * Return: Always 0 (Success)
 */
int main(void)
{
int max_value = 4000000; // Maximum value for Fibonacci terms
int prev_term = 1;
int curr_term = 2;
int next_term = 0;
int sum = 2; // Start with 2 since the second term is even

while (next_term < max_value)
{
next_term = prev_term + curr_term;
if (next_term % 2 == 0)
{
sum += next_term;
}

prev_term = curr_term;
curr_term = next_term;
}


printf("Sum of even-valued terms in the Fibonacci sequence: %d\n", sum);

return (0);
}
