#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int i = 0;
	char letter;

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		i++;
		_putchar('\n');
	}
}
