#include "hash_tables.h"
/**
 * key_index - finds index of hash value
 *
 * @key: given key, string
 *
 * @size: size of hash table.
 *
 * Return: index of hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
