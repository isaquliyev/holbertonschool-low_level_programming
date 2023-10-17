#include "main.h"
/**
 * print_last_digit - check lowercase.
 *
 * @n: variable.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -1 * n;
	}
	_putchar(n + '0');
	return (n);
}
