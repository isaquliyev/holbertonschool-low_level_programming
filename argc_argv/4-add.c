#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * is_natural - the function checks number or not
 * @n: number char array representation
 * Return: if number 1, otherwise 0
 */
int is_natural(char *n)
{
	int i = 0;

	while (*(n + i) != '\0')
	{
		if (!isdigit(*(n + i)))
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - main point
 * @argc: count of array
 * @argv: array of char
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i, sum = 0, c = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_natural(argv[i]))
			break;
		else
		{
			c++;
			sum += atoi(argv[i]);
		}
	}
	if (c == argc - 1)
		printf("%d\n", sum);
	else
		printf("Error\n");
	return (0);
}
