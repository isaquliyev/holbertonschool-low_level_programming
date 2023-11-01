#include "main.h"
#include <string.h>
/**
 * _strncat - connect n elements
 * @dest: destination
 * @src: source
 * @n: count of elements
 * Return: connected string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, size = strlen(dest);

	while (*(src + i) != '\0')
	{
		if (i == n)
			break;
		*(dest + size + i) = *(src + i);
		i++;
	}
	return (dest);
}
