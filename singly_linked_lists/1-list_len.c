#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the function that returns the length of linked list.
 *
 * @h: struct that provides string, length and address of next node.
 *
 * Return: the number of nodes in given linked list.
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
