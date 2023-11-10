#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int length = 0;
	int i;
	/* iterate to find length of string and point to last character */
	while (*s)
	{
		length++;
		s++;
	}
	/* print string reversed */
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
