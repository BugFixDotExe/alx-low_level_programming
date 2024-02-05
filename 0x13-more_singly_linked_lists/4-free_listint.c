#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the pointer to the list
 * Return: void SON!
 */
void free_listint(listint_t *head)
{
	listint_t *current, *nxt;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		nxt = current->next;
		free(current);
		current = nxt;
	}
}
