#include "lists.h"


/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: the start of the list
 * Return: the data stored at the poppd node.
 */

int pop_listint(listint_t **head)
{
	int internal_data;
	listint_t *nxt;

	if (*head == NULL)
		return (0);
	internal_data = (*head)->n;
	nxt = (*head)->next;
	free(*head);
	*head = nxt;
	return (internal_data);
}
