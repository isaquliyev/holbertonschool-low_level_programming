#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - the function that add new node at the end of linked list.
 *
 * @head: initial linked list.
 *
 * @str: the string which is the element of new node.
 *
 * Return: modified linked list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node;

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (*head);
}
