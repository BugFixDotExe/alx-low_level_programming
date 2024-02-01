#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: a pointer of a pointer to the original pointer.
 * @str: the str to be duplicated
 * Return: a pointer to the new node
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL || str == NULL)
		return (NULL);
	new_head->str = malloc(sizeof(char) * strlen(str));
	if (new_head->str == NULL)
		free(new_head);
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
