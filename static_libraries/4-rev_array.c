#include "main.h"
/**
 * reverse_array - reverse the array
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int k = n / 2, i, temp;

	for (i = 0; i < k; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
