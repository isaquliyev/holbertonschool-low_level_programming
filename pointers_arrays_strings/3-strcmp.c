#include "main.h"
#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int size, i = 0, result = 0;

	if (strlen(s1) > strlen(s2))
		size = strlen(s1);
	else
		size = strlen(s2);
	while (i < size)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			result = *(s1 + i) - *(s2 + i);
			break;
		}
		i++;
	}
	return (result);
}
