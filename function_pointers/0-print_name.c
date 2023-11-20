#include <stdlib.h>
/**
 * print_name - prints name using given function
 * @name: name
 * @f: function which prints string
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
