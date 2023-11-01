#include "main.h"
/**
 * print_most_numbers - that print numbers
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(48 + i);
	}
	_putchar('\n');
}
