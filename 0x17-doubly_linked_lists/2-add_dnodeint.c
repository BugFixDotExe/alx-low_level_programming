#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: a pointer to the pointer leading up
 * to the source of the link list
 * @n: the value to be placed in a node
 * Return: address to the new node
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	temp->prev = new_node;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = temp;
	*head = new_node;
	return (new_node);
}
