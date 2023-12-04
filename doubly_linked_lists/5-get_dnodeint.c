#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - function that takes particular node given index.
 *
 * @head: given linked list.
 *
 * @index: index of node.
 *
 * Return: particular node situated in given index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index)
	{
		head = head->next, index--;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
