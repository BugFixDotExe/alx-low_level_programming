#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: the pointer to the linked list
 * Return: sum of all the n's in the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	int sum_of_n;

	sum_of_n = 0;
	current_node = head;
	if (head == NULL)
		return (0);
	while (current_node != NULL)
	{
		sum_of_n += current_node->n;
		current_node = current_node->next;
	}
	return (sum_of_n);
}
