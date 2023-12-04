#include <stdlib.h>
#include "lists.h"

/**
 * free_list - the function that frees linked list
 *
 * @head: given linked list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
