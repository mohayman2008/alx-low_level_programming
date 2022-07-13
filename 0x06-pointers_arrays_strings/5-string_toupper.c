#include "main.h"

/**
 * _islower - checks for lowercase letter
 * @c: ASCII number of a character
 *
 * Return: 1 if lowercase letter, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (_islower(str[i]))
			str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}
