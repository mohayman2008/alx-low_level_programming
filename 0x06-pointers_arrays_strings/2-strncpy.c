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
 * _strncpy - copies n chars from @src to @dest
 * @dest: pointer to the destination buffer
 * @src: source string
 * @n: number of charcters to be copied
 *
 * Return: pointer to the destination buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
