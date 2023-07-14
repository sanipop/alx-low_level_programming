#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int lastDigit;
    int temp;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    temp = abs(n);
    lastDigit = temp % 10;

    printf("Last digit of %d is %d", n, (n < 0) ? -lastDigit : lastDigit);

    if (lastDigit < 6 && lastDigit != 0)
        printf(" and is less than 6 and not 0\n");
    else if (lastDigit > 5)
        printf(" and is greater than 5\n");
    else
        printf(" and is 0\n");

    return 0;
}

