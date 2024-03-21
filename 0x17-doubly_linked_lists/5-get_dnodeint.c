#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list.
 * @head: the start of the list
 * @index: the index of the node to retrieve
 * Return: the address of the node that matches the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current_node;

	current_node = head;
	i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (NULL);
		i++;
	}
	return (current_node);
}
