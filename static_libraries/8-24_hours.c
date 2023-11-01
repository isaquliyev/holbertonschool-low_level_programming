#include "main.h"
/**
 * jack_bauer - time.
 */
void jack_bauer(void)
{
	int a = 0, b = 0;

	while (a < 24)
	{
		while (b < 60)
		{
			if (a < 10)
			{
				_putchar('0');
				_putchar(a % 10 + '0');
			}
			else
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			_putchar(':');
			if (b < 10)
			{
				_putchar('0');
				_putchar(b % 10 + '0');
			}
			else
			{
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
			_putchar('\n');
			b++;
		}
		b = 0;
		a++;
	}
}
