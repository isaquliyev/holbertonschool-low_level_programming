#include "main.h"
/**
 * swap_int - swap integers
 * @a: var 1
 * @b: var 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
