#include "lists.h"


/**
 * list_len - a function that returns the number of elements in a linked list_t list.
 * @h: the pointer to the list of type list_t
 * Return: the number of elements in a list
 */

size_t list_len(const list_t *h)
{
	int i;
	
	i = 0;

	if (h == NULL)
		return (i);
	if (h->str == NULL)
		printf("[0] (nil)");
	for (i = i; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

