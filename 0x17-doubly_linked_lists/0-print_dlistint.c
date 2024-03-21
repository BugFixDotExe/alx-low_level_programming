#include "lists.h"
/**
 * print_dlistint - a function that prints
 * all the elements of a dlistint_t list.
 * @h: the link or pointer to the list
 * Return: a type size_t indicating the num
 * of nodes in the link
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes;
	const dlistint_t *temp;

	temp = h;
	n_nodes = 0;
	if (h == NULL)
		return (n_nodes);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		n_nodes++;
		temp = temp->next;
	}
	return (n_nodes);
}
