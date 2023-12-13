#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates new hash table.
 *
 * @size: size of new hash table.
 *
 * Return: new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);
	return (table);
}
