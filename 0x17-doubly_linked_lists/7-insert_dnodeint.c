#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 * @h: a pointer to the pointer of the link
 * @idx: index to insert at
 * @n: value to insert into node
 * Return: a pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node;
	unsigned int i;

	current_node = *h;
	i  = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (current_node == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	idx = idx - 1;
	while (i != idx)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (NULL);
		i++;
	}
	new_node->n = n;
	new_node->prev = current_node;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
