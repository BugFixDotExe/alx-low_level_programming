#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: a pointer to a pointer to the list
 * @index: the index to delete the node at
 * Return: an int 1 or success and -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current_node;
	dlistint_t *node_to_del_next;
	dlistint_t *current_node_prev;
	dlistint_t *current_node_next;

	current_node = *head;
	i = 0;
	if (current_node == NULL)
		return (-1);
	if (index == 0)
	{
		node_to_del_next = current_node->next;
		node_to_del_next->prev = NULL;
		*head = node_to_del_next;
		free(current_node);
		return (1);
	}
	while (i != index)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (-1);
		i++;
	}
	current_node_prev = current_node->prev;
	current_node_next = current_node->next;
	current_node_prev->next = current_node_next;
	current_node_next->prev = current_node_prev;
	free(current_node);
	return (1);

}
