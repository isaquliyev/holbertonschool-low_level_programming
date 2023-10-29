#include "main.h"
/**
 * _puts_recursion - similar work as puts
 * @s: given string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
