#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - first and n elements of 2nd str
 * @s1: first string
 * @s2: second string
 * @n: count of elements from 2nd string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size1, size2, i;

	size1 = (s1 == NULL) ? 0 : strlen(s1);
	size2 = (s2 == NULL) ? 0 : strlen(s2);
	if (n >= size2)
		n = size2;
	str = malloc(size1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size1 + n; i++)
	{
		if (i < size1)
			str[i] = s1[i];
		else
		{
			str[i] = s2[i - size1];
		}
	}
	str[i] = '\0';
	return (str);
}
