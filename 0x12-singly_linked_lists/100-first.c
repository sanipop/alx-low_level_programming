#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Displays a sentence prior to the main function
 * Function is called
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
