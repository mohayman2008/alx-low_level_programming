#include "main.h"

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
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
