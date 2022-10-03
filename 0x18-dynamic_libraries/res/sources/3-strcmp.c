#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: (+ve, 0, -ve) int if s1 (is greater than, matches, is less than) s2
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int i = 0;

	while (s1[i] != '\0')
	{
		x = s1[i] - s2[i];
		if (x == 0)
			i++;
		else
			return (x);
	}
	return (s1[i] - s2[i]);
}
