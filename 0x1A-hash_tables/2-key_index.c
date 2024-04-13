#include "hash_tables.h"

/**
 * key_index - a function that returns an index given a key
 *
 * @key: the key of type string
 * @size: the size of type unsigned long int
 * Return: the index of type unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int __attribute__((unused))size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index);
}
