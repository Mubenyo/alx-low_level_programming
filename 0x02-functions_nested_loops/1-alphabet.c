#include <stdio.h>

/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */


int main(void)
{
	void print_alphabet(void)
	{
		char alpha = 'a';
		while (alpha <= 'z')
		{
    			putchar(alpha);
   			 alpha++;
		}
		putchar('\n');
	}
  return 0;
}
