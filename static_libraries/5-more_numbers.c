#include "main.h"
/**
 * more_numbers - 10 times 0 to 14
 *
 */
void more_numbers(void)
{
	int i = 0, j = 0;
	char a[] = "01234567891011121314";

	while (i < 10)
	{
		while (a[j] != '\0')
		{
			_putchar(a[j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
