#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a pointer of type list_t
 * Return: the len of the node(s) in the list
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	if (h->str == NULL)
	{
		printf("[%d] (nil)\n", 0);
		return (i);
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		i += 1;
		h = h->next;
	}
	return (i);
}
