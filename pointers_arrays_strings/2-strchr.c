#include <stddef.h>
/**
 * _strchr - function
 * @s: source
 * @c: special character
 * Return: modified string
 */
char *_strchr(char *s, char c)
{
	while (*(s) != c && *(s) != '\0')
		s++;
	if (*(s) == c)
		return (s);
	if (*(s) == '\0')
		return (NULL);
	return (NULL);
}
