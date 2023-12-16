#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - sets given value to given key
 *
 * @ht: hash table
 *
 * @key: key
 *
 * @value: value
 *
 * Return: if success 1, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *buf;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	buf = ht->array[index];
	while (ht->array[index])
	{
		if (!strcmp(ht->array[index]->key, key))
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = buf;
	ht->array[index] = new_node;
	return (1);
}
