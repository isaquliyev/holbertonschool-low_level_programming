#include <stdarg.h>
/**
 * sum_them_all - addition of all arguments
 * @n: number of given integers
 * Return: sum of these arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
