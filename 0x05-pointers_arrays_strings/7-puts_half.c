#include "main.h"

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
	return (len);
}

/**
 * puts_half - prints the second half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = len / 2 ; i <= 1 ; i--)
	{
		_putchar(str[-i]);
	}
	_putchar('\n');
}
