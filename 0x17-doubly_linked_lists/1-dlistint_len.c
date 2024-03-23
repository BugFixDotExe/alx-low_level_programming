#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: the address to the linked list
 * Return: a len of type size_t of len of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_node;
	const dlistint_t *temp;

	temp = h;
	num_of_node = 0;
	if (h == NULL)
		return (num_of_node);
	while (temp != NULL)
	{
		num_of_node++;
		temp = temp->next;
	}
	return (num_of_node);
}
