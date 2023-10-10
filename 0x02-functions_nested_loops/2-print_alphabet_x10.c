#include <stdio.h>
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void)
{
	int i;
	char alphabet = 'a';

	for(i=0; i <= 10; i++)
	{
	       	while (alphabet <= 'z')
                {
			putchar(alphabet);
			alphabet++;
                }
                putchar('\n');
            }
                putchar('\n');
        }
        
