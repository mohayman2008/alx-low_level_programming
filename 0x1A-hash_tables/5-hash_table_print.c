#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0, not_empty = 0;

	if (!ht)
		return;

	putchar('{');
	for (; i < ht->size ; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (!not_empty)
				not_empty = 1;
			else
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
