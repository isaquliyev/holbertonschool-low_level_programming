#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - the function adds new node at the beginning.
 *
 * @head: initial double linked list.
 *
 * @n: the integer value of the new node.
 *
 * Return: modified linked list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
