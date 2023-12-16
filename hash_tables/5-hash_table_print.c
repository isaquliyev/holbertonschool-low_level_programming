#include <stdio.h>
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char checker;

	putchar('{');
	while (++i < ht->size)
	{
		checker = 0;
		while (ht->array[i])
		{
			if (checker)
				putchar(',');
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			checker = 1;
		}
	}
	puts("}");
}
