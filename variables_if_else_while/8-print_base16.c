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
	int a = 48;

	while (a != 103)
	{
		if (a == 58)
			a = 97;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
