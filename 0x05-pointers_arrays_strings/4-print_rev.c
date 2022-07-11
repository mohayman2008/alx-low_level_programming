#include <main.h>

/**
 * _strlen - find the length of a given string
 * @s: pointer to char array
 *
 * Return: The length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
}

/**
 * print_rev - print a string in reverse order
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1 ; i >= 0 ; i--)
		_putchar(*(s + i));
}
