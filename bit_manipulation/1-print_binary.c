#include "main.h"

/**
 * print_binary - prints decimals as binary
 *
 * @n: given decimal
 */

void print_binary(unsigned long int n)
{
	int last = n % 2;

	if (!n)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		_putchar('1'), n /= 2;
		while (n > 1)
			_putchar(n % 2 + '0'), n /= 2;
		_putchar(last + '0');
	}
}
