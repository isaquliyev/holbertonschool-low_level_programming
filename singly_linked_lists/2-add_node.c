#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - the function that adds new node at the beginning of linked list.
 *
 * @head: first node of linked list.
 *
 * @str: the text of new node.
 *
 * Return: same linked list with new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
