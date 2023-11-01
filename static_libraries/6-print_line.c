#include "main.h"
/**
 * print_line - straight line
 *
 * @n: variable
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
