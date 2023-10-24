#include "main.h"
/**
 * leet - translate to 1337
 * @a: input string
 * Return: modified string
 */
char *leet(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		if (*(a + i) == 65 || *(a + i) == 97)
			*(a + i) = '4';
		else if (*(a + i) == 69 || *(a + i) == 101)
			*(a + i) = '3';
		else if (*(a + i) == 79 || *(a + i) == 111)
			*(a + i) = '0';
		else if (*(a + i) == 84 || *(a + i) == 116)
			*(a + i) = '7';
		else if (*(a + i) == 76 || *(a + i) == 108)
			*(a + i) = '1';
		i++;
	}
	return (a);
}
