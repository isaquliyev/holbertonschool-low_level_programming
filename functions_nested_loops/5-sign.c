#include "main.h"
/**
 * print_sign - check lowercase.
 *
 * @n: variable
 *
 * Return: if positive 1, zero 0, negative -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
