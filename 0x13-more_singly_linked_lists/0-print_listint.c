#include "lists.h"


/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a pointer to the list
 * Return: a size of the list if any or 0 if non.
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (count);
	while (h)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
