#include <stdlib.h>
/**
 * array_range - creates array from mion to max
 * @min: first element of array
 * @max: maximum element of array
 * Return: int array from min to max
 */
int *array_range(int min, int max)
{
	int *p, i, c = min;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
	{
		p[i] = c;
		c++;
	}
	return (p);
}
