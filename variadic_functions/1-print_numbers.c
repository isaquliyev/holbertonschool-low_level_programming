#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;
	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ptr, int));
}
