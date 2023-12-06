#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting new node at given position.
 *
 * @h: given double linked list.
 *
 * @idx: particular index that will contain next node.
 *
 * @n: the value of new node.
 *
 * Return: modified double linked list.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *first_part = *h;
	unsigned int i = 0;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		if ((*h))
			new_node->next = *h, (*h)->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;
		return (*h);
	}
	else
	{
		while (i < idx - 1)
		{
			if (!first_part)
				return (NULL);
			i++, first_part = first_part->next;
		}
		new_node->prev = first_part;
		new_node->next = first_part->next;
		first_part->next = new_node;
		return (*h);
	}
	return (NULL);
}
