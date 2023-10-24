#include "main.h"
#include <string.h>
/**
 * _strncpy - copy the str
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: char array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, size = strlen(src);

	if (n > size)
		n = size;
	while (i <= n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
