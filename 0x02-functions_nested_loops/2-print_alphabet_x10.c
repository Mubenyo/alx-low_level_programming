#include <stdio.h>
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alphabet = 'a';
		
		while (alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
		putchar('\n');
	}
}        
