#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int length = 0;
	int i;
<<<<<<< HEAD

	while (s[i++])
		length++;

	for (i = length - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
=======
	/* iterate to find length of string and point to last character */
	while (*s)
	{
		length++;
		s++;
	}
	/* print string reversed */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
>>>>>>> b4ea7621ae497d0460d1daba97f847090b50886a
}
