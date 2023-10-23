#include "main.h"
#include <string.h>
/**
 * print_rev - reverse the string
 * @s: string
 */
void print_rev(char *s)
{
	int n;

	n = strlen(s);
	while (n != -1)
	{
		_putchar(*(s + n));
		n--;
	}
	_putchar('\n');
}
