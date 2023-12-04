#include "lists.h"

/**
 * sum_dlistint - finds the sum of integers
 *
 * @head: given linked list
 *
 * Return: sum of integers
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
		sum += head->n, head = head->next;
	return (sum);
}
