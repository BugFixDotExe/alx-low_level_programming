#include "lists.h"


/**
 * sum_listint - a function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: the start of the list
 * Return: ∑ of all n ints in the nodes
 */

int sum_listint(listint_t *head)
{
	int summation;

	summation = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
