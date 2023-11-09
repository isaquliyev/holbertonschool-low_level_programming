#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb: number of elements
 * @size: size of single byte
 * Return: memory allocated pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
