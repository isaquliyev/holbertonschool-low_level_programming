#include <stdlib.h>
#include <string.h>
/**
 * _strdup - dublicate
 * @str: string
 * Return: copy of string
 */
char *_strdup(char *str)
{
	char *s;
	int len, i = 0;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	s = malloc(len * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
