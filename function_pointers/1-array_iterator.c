#include <stdlib.h>
/**
 * array_iterator - iterate array and perform given functions
 * @array: given integer array
 * @size: size of array
 * @action: given function which will perform
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!action || !size || !array)
		return;
	for (i = 0; i < (int)size; i++)
		(*action)(*(array + i));
}
