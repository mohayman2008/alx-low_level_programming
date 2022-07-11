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
 * puts2 - prints every other chracter of a string
 * @str: string
 */

void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0 ; i < len ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
