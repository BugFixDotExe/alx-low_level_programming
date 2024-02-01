#include "lists.h"

/**
 * free_list - a function that frees the nodes
 * @head: the start of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *prev;
	list_t *next;

	prev = head;
	while (prev != NULL)
	{
		next = prev->next;
		free(prev->str);
		free(prev);
		prev = next;
	}
}
