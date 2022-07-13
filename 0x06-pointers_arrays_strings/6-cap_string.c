#include <stdio.h>
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
 * detect_char - check if a char is an element of string
 * @c: character to be checked
 * @str: string of charcters
 *
 * Return: 1 if detected, 0 if not
 */
int detect_char(char *c, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (*c == str[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	char *separators = " \t\n\v\f\r,;.!\?\"(){}";

	while (str[i] != '\0')
	{
		while (str[i] != '\0' && detect_char(&str[i], separators))
			i++;
		if (_islower(str[i]))
		{
			str[i] -= ('a' - 'A');
		}
		while (str[i] != '\0' && !detect_char(&str[i], separators))
			i++;
	}
	return (str);
}
