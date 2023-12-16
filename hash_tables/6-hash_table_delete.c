#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes hash table.
 *
 * @ht: given hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, *temp2;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				temp2 = temp;
				free(temp->key);
				free(temp->value);
				temp = temp->next;
				free(temp2);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
