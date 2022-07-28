#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates memory block
 * @ptr: previously allocated memory
 * @old_size: size of the prevoiusly allocated memory
 * @new_size: the new size of the memory block
 *
 * Return: pointer to the reallocated memory or NULL if allocation fails or
 *	ptr is NULL or new_size is 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i, copy_len;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	copy_len = old_size < new_size ? old_size : new_size;
	old_ptr = ptr;
	for (i = 0 ; i < copy_len ; i++)
		new_ptr[i] = old_ptr[i];
	free(ptr);
	return ((void *) new_ptr);
}
