#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *leet(char *str)
{
	int i = 0, j;
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *leet = "43071";

	while (str[i] != '\0')
	{
		j = 0;
		while (lower[j] != '\0')
		{
			if (str[i] == lower[j] || str[i] == upper[j])
				str[i] = leet[j];
			j++;
		}
		i++;
	}
	return (str);
}
