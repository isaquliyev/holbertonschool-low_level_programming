#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i, result = -1;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			result = i;
			break;
		}
	}
	return (result);
}
