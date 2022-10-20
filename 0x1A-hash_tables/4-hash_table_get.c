#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table
 * @ht: pointer to the hash table
 * @key: The key string
 *
 * Return: The associated value if key was found or (NULL) otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (!strcmp(current->key, key)) /* key exists */
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
