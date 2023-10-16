#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;

	char c;

	while (a != 91)
	{
		if (a == 123)
		{
			a = 65;
		}
		c = a;

		a++;
		putchar(c);
		if (a == 91)
		{
			putchar(36);
		}
	}
	putchar('\n');
	return (0);
}
