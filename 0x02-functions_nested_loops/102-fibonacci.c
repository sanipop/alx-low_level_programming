#include <stdio.h>

int main(void)
{
int n = 50; 
int fib[n];
fib[0] = 1;
fib[1] = 2;

for (int i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}


for (int i = 0; i < n - 1; i++)
{
printf("%d, ", fib[i]);
}


printf("%d\n", fib[n - 1]);
return (0);
}

