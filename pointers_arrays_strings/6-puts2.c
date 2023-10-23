#include <string.h>
#include "main.h"
/**
 * puts2 - every other
 * @str: variable
 */
void puts2(char *str)
{
	int i = 0, n = strlen(str);

	while (i < n)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
