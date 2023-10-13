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

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n / 10 != 0) {
        print_number(n / 10);
    }

    putchar('0' + n % 10);
}
