#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: constant byte to be searched for
 *
 * Return: pointer to the first occurrence of c, or NULL if it wasn't found
 */

char *_strchr(char *s, char c)
{
	unsigned int i, len;

	for (len = 0 ; s[len] ; len++)
		;

	for (i = 0 ; i <= len ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
