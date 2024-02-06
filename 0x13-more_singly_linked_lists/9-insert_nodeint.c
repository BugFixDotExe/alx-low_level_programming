#include "lists.h"


/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: a pointer to a pointer of a pointer
 * @idx: the index to insert at
 * @n: the value to insert into the new node.
 * Return: the address of the list
 * with the new node at the given position.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *inner_head, *next_node;

	i = 0;
	inner_head = *head;
	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	while (inner_head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		if (i == (idx - 1))
		{
			new_node->n = n;
			next_node = inner_head->next;
			inner_head->next = new_node;
			new_node->next = next_node;
			return (*head);
		}
		/* EXPERIMENTAL WILL CAUSE ERROR IF WRONG !IF LEAVE*/
		if (inner_head->next == NULL)
		{
			new_node->n = n;
			new_node->next = NULL;
			inner_head->next = new_node;
			return (*head);
		}
		i++;
		inner_head = inner_head->next;
	}
	return (NULL);
}
