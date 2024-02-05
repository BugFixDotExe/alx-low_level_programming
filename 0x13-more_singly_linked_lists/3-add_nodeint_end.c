#include "lists.h"


/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: the pointer to the pointer of a pointer
 * @n: the data to be included in a node
 * Return: the address of the new link
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *buffer, *current;

	current = *head;
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
	while (current != NULL)
	{
		if (current->next == NULL)
			break;
		current = current->next;
	}
	buffer = malloc(sizeof(listint_t));
	if (buffer == NULL)
		return (NULL);
	buffer->n = n;
	current->next = buffer;
	buffer->next = NULL;
	return (*head);
}
