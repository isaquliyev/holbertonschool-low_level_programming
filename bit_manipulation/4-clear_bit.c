#include <limits.h>

/**
 * clear_bit - set bit to 1 in given index.
 *
 * @n: pointer to given number.
 *
 * @index: index.
 *
 * Return: 1 if success, otherwise -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = ULONG_MAX - (1 << index);
	unsigned int size = 8 * sizeof(unsigned int);

	if (size > index)
	{
		*n = *n & a;
		return (1);
	}
	return (-1);
}
