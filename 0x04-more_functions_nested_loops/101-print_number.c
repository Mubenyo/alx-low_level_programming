#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to standard output
 * @c: The character to print
 * Return: The number of characters printed
 */


void print_number(int n)
{
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    if (n / 10)
        print_number(n / 10);
    _putchar(n % 10 + '0');
}
