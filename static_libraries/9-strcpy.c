#include "main.h"
#include <string.h>
/**
 * _strcpy - copy the string
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = strlen(src);
	while (a > -1)
	{
		*(dest + a) = *(src + a);
		a--;
	}
	return (dest);
}
