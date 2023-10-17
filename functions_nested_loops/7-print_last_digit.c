#include "main.h"
/**
 * print_last_digit - check lowercase.
 *
 * @n: variable.
 *
 * @a: n % 10
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a = -1 * a;
	}
	_putchar( a + '0');
	return (a);
}
