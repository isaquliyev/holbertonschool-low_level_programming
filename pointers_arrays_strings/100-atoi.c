#include <string.h>
#include "main.h"
/**
 * _atoi - atoi
 * @s: var
 * Return: integer
 */
int _atoi(char *s)
{
	int b, i, minus = 0, size;
	unsigned int a = 0;

	size = strlen(s);
	for (i = 0; i < size; i++)
	{
		if (*(s + i) == 45)
		{
			minus += 1;
		}
		if (*(s + i) < 58 && *(s + i) > 47)
		{
			a = a * 10 + (*(s + i) - 48);
			if (i != size - 1 && (*(s + i + 1) > 57 || *(s + i + 1) < 48))
			{
				break;
			}
		}
	}
	if (minus % 2 == 1)
	{
		b = -1 * a;
	}
	else
		b = a;
	return (b);
}
