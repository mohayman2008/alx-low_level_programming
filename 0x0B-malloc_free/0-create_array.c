#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - allocate memory for an array of chars and populate is with a
 *	constant charcter
 * @size: size of the array
 * @c: the constant character
 *
 * Return: pointer to the created array or NULL in case of failure to allocate
 *	memory
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		ptr[i] = c;
	return (ptr);
}
