/**
 * set_bit - set bit to 1 in given index.
 *
 * @n: pointer to given number.
 *
 * @index: index.
 *
 * Return: 1 if success, otherwise -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int size = 8 * sizeof(unsigned int);

	if (size > index)
	{
		a = *n;
		*n = *n >> index;
		*n = *n | 1;
		*n = *n << index;
		*n = *n | a;
		return (1);
	}
	return (-1);
}
