#include <stdio.h>

/**
 * print_numbers - print 0 to 9
 */

void print_numbers(void)
{
	char i;
	
	for (i = 0; i <= 9; i++)
		putchar(i);

	putchar('\n');
}
