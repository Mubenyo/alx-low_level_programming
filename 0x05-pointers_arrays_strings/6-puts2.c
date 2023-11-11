#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
void puts2(char* str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
       	_putchar(str[i]);
       	i += 2;
	}
	_putchar('\n');
}
/*int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}*/

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

/*void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}*/
