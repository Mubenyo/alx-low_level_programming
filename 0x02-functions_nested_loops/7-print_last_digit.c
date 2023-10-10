#include <stdio.h>

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int number)
{
	if (number < 0)
		number *= -1;

       	putchar('0' + (n % 10));

	return (number % 10);
}
