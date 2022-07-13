#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *rot13(char *str)
{
	int i = 0, j;
	char c;

	while (str[i] != '\0')
	{
		c = str[i];
		for (j = 0 ; j <= ('a' - 'A') ; j += ('a' - 'A'))
		{
			if (c >= ('A' + j) && c <= ('Z' + j))
				str[i] = (((c - 'A' - j + 13) % 26) + 'A' + j);
		}
		i++;
	}
	return (str);
}
