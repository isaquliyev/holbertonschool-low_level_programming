#include <stdio.h>
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;
	char checker = 0;
	
	putchar('{');
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (checker == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			checker = 1;
			tmp = tmp->next;
		}
		i++;
	}
	puts("}");
}
