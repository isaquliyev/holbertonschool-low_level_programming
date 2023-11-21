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
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		if (va_arg(ptr, char *))
			printf("%s", va_arg(ptr, char *));
		else
			printf("(nil)");
		if (separator)
			printf("%s", separator);
	}
	if (va_arg(ptr, char *))
		printf("%s", va_arg(ptr, char *));
	else
		printf("(nil)");
	printf("\n");
}
