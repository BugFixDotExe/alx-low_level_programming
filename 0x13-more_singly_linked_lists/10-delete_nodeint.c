#include "lists.h"


/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: the pointer to the start of the node
 * @index: the index to be deleted
 * Return: 1 for succes an d -1 for fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next_node, *inner_head;

	inner_head = *head;
	i = 0;
	if (*head == NULL)
		return (-1);
	while (inner_head)
	{
		if (index == 0)
		{
			next_node = inner_head->next;
			free(inner_head);
			*head = next_node;
			return (1);
		}
		if (i == (index - 1))
		{
			current = inner_head;
		}
		if (i == index)
		{
			next_node = inner_head->next;
			current->next = next_node;
			free(inner_head);
			return (1);
		}
		inner_head = inner_head->next;
		i++;
	}
	return (-1);
}
