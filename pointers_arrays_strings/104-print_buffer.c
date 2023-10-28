#include <stdio.h>
/**
 * add_spaces - add placeholders for last line
 * @i: number of spaces
 */
void add_spaces(int i)
{
	int n_spaces = 25 - ((i + 1) % 10) * 5 / 2;

	while (n_spaces > 0)
	{
		printf(" ");
		n_spaces--;
	}
}
/**
 * print_buffer - prints buffer string
 * @b: string
 * @size: size of string
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, flag = 1;

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: %02x", i, *(b + i));
		else if (i % 2 == 1)
			printf("%02x ", *(b + i));
		else
			printf("%02x", *(b + i));
		if (i % 10 == 9 || i == size - 1)
		{
			for (; j <= i; j++)
			{
				if (i == size - 1 && flag == 1 && i % 10 != 9)
				{
					flag = 0;
					add_spaces(i);
				}
				if (*(b + j) >= 32 && *(b + j) <= 126)
					printf("%c", *(b + j));
				else
					printf(".");
			}
			printf("\n");
		}
		i++
	}
	if (size == 0)
		printf("\n");
}
