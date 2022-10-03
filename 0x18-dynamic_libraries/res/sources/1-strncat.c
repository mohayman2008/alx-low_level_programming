#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n chars from @src
 * @dest: pointer to the destination buffer
 * @src: string to extend dest
 * @n: number of charcters to be copied
 *
 * Return: pointer to the destination buffer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
