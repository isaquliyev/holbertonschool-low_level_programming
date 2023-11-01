#include <string.h>
/**
 * _strcat - connect strings
 * @dest: destination
 * @src: source
 * Return: new string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = strlen(dest);

	do {
		*(dest + n + i) = *(src + i);
		i++;
	} while (*(src + i) != '\0');
	return (dest);
}
