#include "main.h"

/**
 * jack_bauer - print the minutes in the day of Jack Bauer
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			_putchar(hours / 10 + 48);
			_putchar(hours % 10 + 48);
			_putchar(':');
			_putchar(minutes / 10 + 48);
			_putchar(minutes % 10 + 48);
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
