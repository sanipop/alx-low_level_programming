#include "main.h"

/**
 * _islower - Checks for lowercase character
 * print_alphabet_x10 - Make alphabet x10 times
 * return: void
 */

void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar (ch);
}
_putchar('\n');
i++;
}
}
