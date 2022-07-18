#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any byte belongs to set of bytes
 * @s: a string
 * @accept: string of the accepted characters
 *
 * Return: a pointer to the 1st matched byte or NULL if no matches
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
