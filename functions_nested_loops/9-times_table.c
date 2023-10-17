#include "main.h"
/**
 * times_table - check lowercase.
 */
void times_table(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			if (i * j <= 9)
			{
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				if (i * (j + 1) <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			j++;
		}
		j = 0;
		i++;
		_putchar('\n');
	}
}
