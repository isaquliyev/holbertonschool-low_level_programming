#include <stdlib.h>
/**
 * get_bit - get value of bit at given index.
 *
 * @n: given integer.
 *
 * @index: which index we need.
 *
 * Return: a bit which we want to find.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = sizeof(unsigned long int) * 8;

	if (index >= a)
		return (-1);
	n = n >> index & 1;
	return (n);
}
