#include "main.h"
/**
 * print_times_table - prints times table.
 *
 * @n: variable
 */
void print_times_table(int n)
{
	int i = 0, j = 0;

	while (i <= n)
	{
		if (n > 15 || n < 0)
			break;
		while (j <= n)
		{
			if (i * j <= 9)
				_putchar((i * j) % 10 + '0');
			else if (i * j <= 99)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				_putchar((i * j) / 100 + '0');
				_putchar(((i * j) / 10) % 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j != n)
			{
				_putchar(',');
				if (i * (j + 1) <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (i * (j + 1) <= 99)
					_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		j = 0;
		i++;
		_putchar('\n');
	}
}
