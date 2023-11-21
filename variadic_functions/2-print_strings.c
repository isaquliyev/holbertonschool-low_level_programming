#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings given in prompt
 * @separator: separator between string
 * @n: number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *s;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
