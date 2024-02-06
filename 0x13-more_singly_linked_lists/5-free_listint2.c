#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to the pointer of a pointer
 * Return: void SON!
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *nxt;

	if (*head == NULL)
		return (0);
	current = *head;
	while (current != NULL)
	{
		nxt = current->next;
		free(current);
		current = nxt;
	}
	*head = NULL;
}
