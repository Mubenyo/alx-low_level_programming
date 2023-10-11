#include <stdio.h>

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n)
{
	int row;
	int column;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = (row * column);
				if (column == 0)
					putchar('0' + product);
				else
				{
					putchar(',');
					putchar(' ');
					if (product <= 9)
					{
						putchar(' ');
						putchar(' ');
						putchar('0' + product);
					}
					else if (product > 9 && product < 100)
					{
						putchar(' ');
						putchar('0' + (product / 10));
						putchar('0' + (product % 10));
					}
					else if (product >= 100)
					{
						putchar('0' + (product / 100));
						putchar('0' + ((product / 10) % 10));
						putchar('0' + (product % 10));
					}
				}
			}
			putchar('\n');
		}
	}
}
