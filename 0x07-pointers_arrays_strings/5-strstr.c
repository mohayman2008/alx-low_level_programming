#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: a string to be searched
 * @needle: the string to be matched
 *
 * Return: a pointer to the beginning of the first matched substring
 *	or NULL if no matches
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, str_idx, matched;

	for (str_idx = 0 ; haystack[str_idx] ; str_idx++)
	{
		matched = 0;
		if (haystack[str_idx] == needle[0])
		{
			i = str_idx + 1;
			matched = 1;

			for (j = 1 ; needle[j] && haystack[i] ; i++, j++)
			{
				if (haystack[i] != needle[j])
				{
					matched = 0;
					break;
				}
			}

			if (matched && !needle[j])
				return (haystack + str_idx);
		}
	}

	return (NULL);
}
