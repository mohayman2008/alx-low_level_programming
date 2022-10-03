#include "main.h"

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
