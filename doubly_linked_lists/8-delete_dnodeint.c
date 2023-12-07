#include "lists.h"
#include <stdlib.h>

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

/**
 * delete_dnodeint_at_index - delete the node in given index
 *
 * @head: pointer to pointer of linked list.
 *
 * @index: index of node which will be deleted.
 *
 * Return: 1 if success, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (dlistint_len(*head) <= index)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
	}
	else
	{
		while (i < index - 1)
			i++, temp = temp->next;
		temp->next->next->prev = temp;
		temp->next = temp->next->next;
	}
	while (temp)
		temp = temp->next;
	free(temp);
	return (1);
}
