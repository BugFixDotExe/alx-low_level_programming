#include "lists.h"


/**
 * add_node - add a node when head is null
 * @head: the start of the list
 * @str: the string to be copied into the node
 * Return: a pointer to the created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *end_node;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = malloc(sizeof(char) * strlen(str));
	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;
	*head = end_node;
	return (*head);
}

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: a pointer to a pointer of a pointer
 * @str: the string to be worked upon
 * Return: a pointer of type list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t **nodes = head;

	if (str == NULL)
		return (NULL);
	if (*head == NULL)
		return (add_node(head, str));

	while (*nodes)
	{
		nodes = &(*nodes)->next;
	}
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = malloc(sizeof(char) * strlen(str));
	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
	end_node->str = strdup(str);
	end_node->len = strlen(str);
	*nodes = end_node;
	end_node->next = NULL;
return (end_node);
}
