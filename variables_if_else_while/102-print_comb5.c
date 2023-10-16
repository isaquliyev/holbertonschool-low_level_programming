#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, m;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			m = j + 1;
			for (k = i; k <= 57; k++)
			{
				for (; m <= 57; m++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i != 57 || j != 56 || k != 57 || m != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				m = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
