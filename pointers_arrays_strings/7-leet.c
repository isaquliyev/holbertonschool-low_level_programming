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
		*(a + i) = (*(a + i) == 65 || *(a + i) == 97) ? '4' : *(a + i);
		*(a + i) = (*(a + i) == 69 || *(a + i) == 101) ? '3' : *(a + i);
		*(a + i) = (*(a + i) == 79 || *(a + i) == 111) ? '0' : *(a + i);
		*(a + i) = (*(a + i) == 84 || *(a + i) == 116) ? '7' : *(a + i);
		*(a + i) = (*(a + i) == 76 || *(a + i) == 108) ? '1' : *(a + i);
		i++;
	}
	return (a);
}
