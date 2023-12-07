#include <string.h>

/**
 * power_of_2 - finds power of 2 using given power rate.
 *
 * @n: power rate.
 *
 * Return: the result of operation.
 */

unsigned int power_of_2(unsigned int n)
{
	unsigned int result = 1;

	while (n > 0)
		n--, result *= 2;
	return (result);
}

/**
 * binary_to_uint - converts binary code to unsigned int type.
 *
 * @b: pointer to first element of string.
 *
 * Return: 10 based value of binary code.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, counter = 0, len;

	if (!b)
		return (0);
	len = strlen(b);
	while (*(b + counter))
	{
		counter++;
		if (*(b + counter - 1) == '1')
			sum += power_of_2(len - counter);
		else if (*(b + counter - 1) != '0')
			return (0);
	}
	return (sum);
}
