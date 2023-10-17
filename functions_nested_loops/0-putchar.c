#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "_putchar\n";

	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	return (0);
}
