#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
