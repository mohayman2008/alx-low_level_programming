#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copy a string to allocated memory after allocating it
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicate string or NULL (in case of failure to
 *	allocate memory or if str is NULL)
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);

	for (i = 0 ; i < len ; i++)
		ptr[i] = str[i];
	ptr[len] = '\0';

	return (ptr);
}
