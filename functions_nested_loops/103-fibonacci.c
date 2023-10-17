#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: always 0
 */
int main(void)
{
	long a = 1, b = 2, temp, sum = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		temp = a;
		a = b;
		b = a + temp;
	}
	printf("%ld\n", sum);
	return (0);
}
