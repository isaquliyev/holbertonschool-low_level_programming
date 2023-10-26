#include "main.h"
/**
 * rot13 - ceaser cipher key = 13
 * @a: string
 * Return: char array
 */
char *rot13(char *a)
{
	int i = 0;
	char c;

	while (*(a + i) != '\0')
	{
		c = *(a + i);
		while ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
			if (c >= 110 || (c >= 78 && c <= 90))
			{
				*(a + i) = *(a + i) - 13;
				break;
			}
			*(a + i) = *(a + i) + 13;
			break;
		}
		i++;
	}
	return (a);
}
