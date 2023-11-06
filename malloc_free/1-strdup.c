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
		return (s);
	len = strlen(str);
	s = malloc(len * sizeof(char) + 1);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
