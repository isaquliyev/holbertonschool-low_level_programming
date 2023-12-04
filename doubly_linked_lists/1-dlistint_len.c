#include "lists.h"

/**
 * dlistint_len - the function that finds length of doubly linked list.
 *
 * @h: given doubly linked list
 *
 * Return: the length of double linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
		h = h->next, size++;
	return (size);
}
