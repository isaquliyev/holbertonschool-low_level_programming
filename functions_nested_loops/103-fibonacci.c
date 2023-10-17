#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: always 0
 */
int main(void)
{
	long a = 1, b = 2, temp, sum = 0;

	int c = 0;

	while (a < 4000000)
	{
		temp = a;
		a = b;
		b = a + temp;
		if (c % 3 == 0)
		{
			sum += b;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
