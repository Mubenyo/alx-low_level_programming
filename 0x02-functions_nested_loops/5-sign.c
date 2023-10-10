#include <stdio.h>

/**
 * print_sign - print sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int print_sign(int num)
{
	if (num > 0)
	{
		putchar('+');
		putchar(',');
		putchar(' ');
		ptchar('1');
	}
	else if (num == 0)
	{
		putchar('0');
		putchar(',');
                putchar(' ');
		return (0);
	}
	else
	{
		putchar(',');
                putchar(' ');
		putchar(',');
                putchar(' ');
		return (-1);
	}
}
