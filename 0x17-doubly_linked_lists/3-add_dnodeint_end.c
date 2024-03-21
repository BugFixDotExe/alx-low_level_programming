#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list.
 * @head: a pointer of a pointer to the list
 * @n: the value to be included into the node
 * Return: a pointe to the added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (temp == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			new_node->n = n;
			new_node->prev = temp;
			temp->next = new_node;
			new_node->next = NULL;
			break;
		}
		temp = temp->next;
	}
	return (new_node);
}
