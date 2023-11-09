#include "main.h"
/**
 * print_number - prints numbers
 *
 *
 * @n: integer
 */
void print_number(int n)
{
	unsigned int yeni;
	int a = 1;

	if (n < 0)
	{
		yeni = n * -1;
		_putchar('-');
	}
	else
	{
		yeni = n;
	}

	do {
		if (yeni < 10)
		{
			_putchar(yeni + '0');
			break;
		}
		a = a * 10 + yeni % 10;
		yeni = yeni / 10;
	} while (yeni != 0);
	do {
		if (a < 10)
		{
			break;
		}
		_putchar(a % 10 + '0');
		a = a / 10;
	} while (a != 0);
}
