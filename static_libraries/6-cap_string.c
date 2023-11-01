#include "main.h"
/**
 * cap_string - capitalize the string
 * @a: input char value
 * Return: char value
 */
char *cap_string(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		if (i > 0 && *(a + i) >= 97 && *(a + i) <= 122)
		{
			if (*(a + i - 1) <= 34 || *(a + i - 1) == 44)
			{
				*(a + i) = *(a + i) - 32;
			}
			else if (*(a + i - 1) == 63 || *(a + i - 1) == 46 || *(a + i - 1) == 59)
			{
				*(a + i) = *(a + i) - 32;
			}
		}
		if (i == 0 && *(a + i) >= 97 && *(a + i) <= 122)
		{
			*(a + i) = *(a + i) - 32;
		}
		i++;
	}
	return (a);
}
