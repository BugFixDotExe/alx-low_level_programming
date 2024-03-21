#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: the start of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;
	dlistint_t *prev;

	prev = head;
	while (prev != NULL)
	{
		next = prev->next;
		free(prev);
		prev = next;
	}
}
