#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end.
 *
 * @head: initial linked list.
 *
 * @n: the integer value of new node.
 *
 * Return: modified linked list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node = *head;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (*head);
}
