#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;
	char f = 0;

	if (!ht)
		return;
	putchar('{');
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (f)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			if (!f)
				f++;
		}
		i++;
	}
	puts("}");
}
