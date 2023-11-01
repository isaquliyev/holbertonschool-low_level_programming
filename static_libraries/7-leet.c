#include "main.h"
/**
 * leet - translate to 1337
 * @a: input string
 * Return: modified string
 */
char *leet(char *a)
{
	int i = 0, j = 0;
	char lower[6] = "aeotl";
	char upper[6] = "AEOTL";
	char leet[6] = "43071";

	while (*(a + i) != '\0')
	{
		while (j < 5)
		{
			if (*(upper + j) == *(a + i) || *(lower + j) == *(a + i))
				*(a + i) = *(leet + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
