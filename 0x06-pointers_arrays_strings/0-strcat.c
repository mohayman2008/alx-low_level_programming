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
 * _strcat - concatenates two strings
 * @dest: pointer to the destination buffer
 * @src: string to extend dest
 *
 * Return: pointer to the destination buffer
 */

char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
