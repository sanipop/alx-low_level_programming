#include <stdio.h>
/**
 * main -print the sum of all multiples of 3 or 5 up to 1024
 * Return: Always(success)
 */
int main(void)
{
int limit = 1024; 
int sum = 0;

for (int i = 3; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i; 
}
}

printf("The sum of all multiples of 3 or 5 below %d is: %d\n", limit, sum);
return (0);
}

