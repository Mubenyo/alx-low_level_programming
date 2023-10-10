#include <stdio.h>

/**
 * Description :islower Check if a character is a lowercase letter.
 *
 * This function checks if the given character is a lowercase letter
 * in the ASCII character set.
 *
 * @c The character to be checked.
 * @return 1 if the character is a lowercase letter, 0 otherwise.
 */

	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
