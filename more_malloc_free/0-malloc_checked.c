#include <stdlib.h>
/**
 * malloc_checked - allocate memory for integer
 * @b: variable for constructor
 * Return: memory allocation
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
