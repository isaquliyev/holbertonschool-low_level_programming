#include "main.h"
#include <string.h>
/**
 * rev_string - reverse the string
 * @s: our string
 */
void rev_string(char *s)
{
	int n, i, k;
	char c;

	n = strlen(s) - 1;
	if (n % 2 == 0)
		k = n / 2;
	else
	{
		k = n / 2 + 1;
	}
	for (i = 0; i < k; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + n - i);
		*(s + n - i) = c;
	}
}
