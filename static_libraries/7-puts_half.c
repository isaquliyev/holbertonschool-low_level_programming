#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of string
 * @str: input string
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int i = (n + 1) / 2;

	while (i < n)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
