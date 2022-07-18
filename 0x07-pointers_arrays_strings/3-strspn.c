#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring whose characters are
 *	include in another substring
 * @s: a string
 * @accept: string of the accepted characters
 *
 * Return: the length of the initial segment of s consists only of bytes
 * from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, accepted = 0;

	for (i = 0 ; s[i] ; i++)
	{
		accepted = 0;
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				accepted = 1;
				break;
			}
		}
		if (!accepted)
			return (i);
	}

	return (i);
}
