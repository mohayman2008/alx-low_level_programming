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

	if (_strlen(s1) > _strlen(s2))
	{
		int len = _strlen(s2);

		return (s1[len]);
	}

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
