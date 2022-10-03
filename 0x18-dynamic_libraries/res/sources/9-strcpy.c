#include "main.h"

/**
 * _strcpy - copies a string, including the terminating null byte, to a buffer
 * @dest: pointer to the destination buffer
 * @src: string to be copied
 *
 * Return: pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);
	int i;

	for (i = 0 ; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
