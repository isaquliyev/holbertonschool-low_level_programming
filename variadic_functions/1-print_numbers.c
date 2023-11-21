#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers which written on prompt
 * @separator: separator between 2 sequental elements
 * @n: number of integers will pass
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d", va_arg(ptr, int));
	printf("\n");
}
