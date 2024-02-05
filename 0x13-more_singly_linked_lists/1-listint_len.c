#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: a pointer to the list
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (count);
	while (h)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
