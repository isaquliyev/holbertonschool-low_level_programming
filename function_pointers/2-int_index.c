#include <stdlib.h>
/**
 * int_index - checks compare functions
 * @array: given array
 * @size: size of array
 * @cmp: function pointer performs compare functions
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = -1;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if((*cmp)(*(array + i)))
		{
			index = i;
			break;
		}
	}
	return (index);
}
