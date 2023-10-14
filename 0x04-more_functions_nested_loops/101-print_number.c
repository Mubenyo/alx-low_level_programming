#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to standard output
 * @c: The character to print
 * Return: The number of characters printed
*/


int _putchar(char c) 
{
    return write(1, &c, 1);
}
/*
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    if (n / 10 != 0)
    {
        print_number(n / 10);
    }
    _putchar(n % 10 + '0');
}
*/

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */



void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}

	k /= 10;

	if (k != 0)
		print_number(k);

	_putchar((unsigned int) n % 10 + '0');

}
