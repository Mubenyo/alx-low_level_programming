#include <stdio.h>

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		putchar('_');

	putchar('\n');
}