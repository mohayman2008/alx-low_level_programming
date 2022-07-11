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
 * rev_string - reverse the order of chracters of a string
 * @s: string
 */

void rev_string(char *s)
{
	int i;
	int len = _strlen(s);
	char tmp;

	for (i = 0 ; i < len / 2 ; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
