#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the underlying array
 *
 * Return: The created hash table or NULL on error or if size == 0
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	hash_node_t **array;

	array = calloc(size, sizeof(*array));
	if (!size || !array)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
	{
		free(array);
		return (NULL);
	}

	new->size = size;
	new->array = array;

	return (new);
}
