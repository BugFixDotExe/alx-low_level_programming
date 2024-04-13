#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht: a pointer to the hash table
 * @key: the index to the hash table
 * Return: the associated value with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index > ht->size)
		return (NULL);
	value = ht->array[index]->value;
	return (value);
}
