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
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
	}
	else
	{
		while (i < idx - 1)
		{
			i++, first_part = first_part->next;
			if (!first_part)
				return (NULL);
		}
		new_node->n = n;
		new_node->prev = first_part;
		new_node->next = first_part->next;
		first_part->next = new_node;
	}
	return (*h);
}
