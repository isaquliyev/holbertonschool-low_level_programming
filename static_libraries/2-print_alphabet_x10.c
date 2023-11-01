#include "main.h"
/**
 * print_alphabet_x10 - prints every character of alphabet
 */
void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i = 0, j = 0;

	while (j < 10)
	{
		while (a[i] != '\0')
		{
			_putchar(a[i]);
			i++;
		}
		i = 0;
		j++;
	}
}
