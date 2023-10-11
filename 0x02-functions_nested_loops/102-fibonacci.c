#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;
	long temp;

	printf("%li", a);

	for (counter = 2; counter <= countto; counter++) {
        printf(", %li", b);

        if (counter % 2 == 0)
	{
            temp = a + b;
            a = b;
            b = temp;
        } else
	{
            temp = a + b;
            a = b;
            b = temp;
        }
    }

 	printf("\n");
	
	return 0;
}

