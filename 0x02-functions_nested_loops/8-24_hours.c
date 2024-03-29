#include <stdio.h>

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	while (hours < 24)
	{
		while (min < 60)
		{
			putchar('0' + (hours / 10));
			putchar('0' + (hours % 10));
			putchar(':');
			putchar('0' + (min / 10));
			putchar('0' + (min % 10));
			putchar('\n');
			min++;
		}
		min = 0;
		hours++;
	}
}
