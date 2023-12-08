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
	while (index)
		index--, n = n >> 1;
	n = n & 1;
	if (n)
		return (n);
	return (-1);
}
