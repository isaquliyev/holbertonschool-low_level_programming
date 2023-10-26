#include "main.h"
/**
 * rot13 - ceaser cipher key = 13
 * @a: string
 * Return: char array
 */
char *rot13(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		while ((*(a + i) >= 65 && *(a + i) <= 90) || (*(a + i) >= 97 && *(a + i) <= 122))
		{
			if (*(a + i) >= 110 || (*(a + i) >= 78 && *(a + i) <= 90))
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
