#include <stdio.h>

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int draw;
	int space;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 1; space < draw; space++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
