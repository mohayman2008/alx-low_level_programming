#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: num of members of the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory or NULL if allocation fails or
 *	if nmemb = 0 or size = 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, max;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	max = nmemb * size;
	for (i = 0 ; i < max ; i++)
		ptr[i] = 0;
	return ((void *) ptr);
}
