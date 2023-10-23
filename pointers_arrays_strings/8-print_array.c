#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: var a
 * @n: var n
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
			i++;
			continue;
		}
		printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
