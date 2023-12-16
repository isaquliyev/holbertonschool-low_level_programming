#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - gets value from array at the given index
 *
 * @ht: hash table
 *
 * @key: key
 *
 * Return: string if exist, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if (!strcmp(ht->array[index]->key, key))
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
