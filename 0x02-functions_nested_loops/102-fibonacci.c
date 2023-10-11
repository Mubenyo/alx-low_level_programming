#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
    int counter;
    int countto = 50;
    long a = 1;
    long b = 2;

    for (counter = 1; counter <= countto; counter++)
    {
        printf("%li", a);
        if (counter != countto)
            printf(", ");
        long temp = a;
        a = b;
        b += temp;
    }
    printf("\n");

    return (0);
}
