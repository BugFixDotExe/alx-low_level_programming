#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: a pointer to the pointer of the head pointer
 * @n: the value to be added to the new node
 * Return: a pointer to the new list with the
 * node included.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *buffer;

	if (*head == NULL)
	{
		buffer = malloc(sizeof(listint_t));
		if (buffer == NULL)
			return (NULL);
		buffer->n = n;
		buffer->next = NULL;
		*head = buffer;
		return (*head);
	}
	buffer = malloc(sizeof(listint_t));
	if (buffer == NULL)
		return (NULL);
	buffer->n = n;
	buffer->next = *head;
	*head = buffer;
	return (*head);
}
