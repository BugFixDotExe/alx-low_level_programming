#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element into the hash table
 *
 * @ht: a pointer to the linke list
 * @key: the key to used to index the table
 * @value: the value to be inserted into a node
 * Return: 1 on success and 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	int beacon;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (ht == NULL || key == NULL)
		return (0);
	if (value == NULL)
		return (0);
	/*The function key_index is responsible for,*/
	/*creating a hash using the key*/
	/*This is the hash function*/
	index = key_index((const unsigned char *)key, ht->size);
	/*This does not take into account collision, only*/
	/*it only checks if that index is NULL before it op*/
	/*NO COLLISION DETECTION*/
	if (ht->array[index] == NULL)
	{
		beacon = node_create(new_node, key, value);
		if (beacon == -1)
			return (0);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	/*This takes into account, if that slot in,*/
	/*the hash table is not NULL*/
	/*COLLISION DETECTION*/
	else if (ht->array[index] != NULL)
	{
		beacon = node_create(new_node, key, value);
		if (beacon == -1)
			return (0);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

/**
 * node_create - a function that creates a node
 *
 * @addr: the address to the new node
 * @key: the key to be copied into the node
 * @value: the value to be copied into the node
 *
 * Return: 0 on success and -1 on error
 */
int node_create(hash_node_t *addr, const char *key, const char *value)
{
	if (strlen(key) == 0 || strlen(value) == 0)
		return (-1);
	addr->key = malloc(sizeof(char) * strlen(key) + 1);
	if (addr->key == NULL)
		return (-1);
	addr->value = malloc(sizeof(char) * strlen(value) + 1);
	if (addr->value == NULL)
		return (-1);
	strcpy(addr->key, key);
	strcpy(addr->value, value);
	return (0);
}
