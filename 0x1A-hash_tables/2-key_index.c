#include "hash_tables.h"

/**
 * key_index - Calculates the designated index of a key in a hash table
 * @key: The key string to be hashed
 * @size: size of the underlying array of the hash table
 *
 * Return: The calculated index or (0) if key is NULL
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
		return (0);
	return (hash_djb2(key) % size);
}
