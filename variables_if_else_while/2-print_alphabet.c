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

	while (a <= 122)
	{
		char c = a;

		putchar(c);
		a++;
	}
	putchar('\n');
	return (0);
}
