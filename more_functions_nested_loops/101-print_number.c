#include "main.h"
/**
 * print_number - prints numbers
 *
 * @n: integer
 */
void print_number(int n)
{
	int a = 0;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	while (n != 0)
	{
		if (n < 10)
		{
			_putchar(n + '0');
			break;
		}
		a = a * 10 + n % 10;
		n = n / 10;
	}
	do {
		_putchar(a % 10 + '0');
		a = a / 10;
	} while (a != 0);
}
