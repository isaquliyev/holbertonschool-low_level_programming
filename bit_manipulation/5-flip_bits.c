/**
 * flip_bits - finds number of bits are different
 *
 * @n: first number
 *
 * @m: second number
 *
 * Return: number of different bit occurences.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	n = n ^ m;
	while (n)
	{
		counter += n & 1;
		n = n >> 1;
	}
	return (counter);
}
