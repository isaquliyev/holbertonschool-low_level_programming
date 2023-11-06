#include <string.h>
#include <stdlib.h>
/**
 * str_concat - string connecter
 * @s1: first str
 * @s2: second str
 * Return: concaterated string
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int l1, l2, i = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	l1 = (s1 == NULL) ? 0 : strlen(s1);
	l2 = (s2 == NULL) ? 0 : strlen(s2);
	con = malloc((l1 + l2) * sizeof(char) + 1);
	if (con == NULL)
		return (NULL);
	while (i < l1)
	{
		con[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		con[i] = s2[i - l1];
		i++;
	}
	con[i] = '\0';
	return (con);
}
