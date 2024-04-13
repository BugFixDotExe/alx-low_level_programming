#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * given size
 *
 * @size: the size of the table at creation
 * Return: a pointer the hashtable of type hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t) * size);
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = NULL;
	return (hash_table);
}