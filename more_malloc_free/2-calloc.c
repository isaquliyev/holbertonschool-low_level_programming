#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb: number of elements
 * @size: size of single byte
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (malloc(nmemb * size));
}
