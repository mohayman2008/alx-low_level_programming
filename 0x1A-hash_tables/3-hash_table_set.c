#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: The key string
 * @value: The value associated with the key
 *
 * Return: (1) on success or (0) otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *new;

	if (!ht || !key || !value || !*key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (!strcmp(current->key, key)) /* key exists already */
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new = malloc(sizeof(*new));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];

	ht->array[index] = new;

	return (1);
}
