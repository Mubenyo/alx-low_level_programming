#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for the program.
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers in the format "XX YY," separated by commas and spaces. It iterates
 * through all two-digit numbers, ensuring that the second number is greater
 * than or equal to the first number.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			int tens1 = num1 / 10;
			int ones1 = num1 % 10;
			int tens2 = num2 / 10;
			int ones2 = num2 % 10;

			_putchar('0' + tens1);
			_putchar('0' + ones1);
			_putchar(' ');
			_putchar('0' + tens2);
			_putchar('0' + ones2);
			if (num1 != 98 || num2 != 99)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	return (0);
}
