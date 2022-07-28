#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: num of bytes to be allocated
 *
 * Return: pointer to the allocated memory
 * if allocation fails it calls exit(98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
