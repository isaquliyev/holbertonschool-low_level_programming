#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 always success
 */
int main(void)
{
	long long a = 1, b = 2, temp;

	int c = 0;

	while (c < 50)
	{
		printf("%lld", a);
		if (c != 49)
		{
			printf(", ");
		}
		temp = a;
		a = b;
		b = temp + b;
		c++;
	}
	printf("\n");
	return (0);
}
