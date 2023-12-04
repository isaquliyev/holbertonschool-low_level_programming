#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees the double linked list
 *
 * @head: initial linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
