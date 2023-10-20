#include "main.h"
/**
 * print_number - prints numbers
 *
 * @n: integer
 */
void print_number(int n)
{
	int a = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	do {
		if (n < 10)
		{
			_putchar(n + '0');
			break;
		}
		a = a * 10 + n % 10;
		n = n / 10;
	} while (n != 0);
	do {
		if (a < 10)
		{
			break;
		}
		_putchar(a % 10 + '0');
		a = a / 10;
	} while (a != 0);
}
