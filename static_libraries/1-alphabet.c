#include "main.h"
/**
 * print_alphabet - prints every character of alphabet
 */
void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
}
