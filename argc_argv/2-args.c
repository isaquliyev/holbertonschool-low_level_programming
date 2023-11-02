#include <stdio.h>
#include <string.h>
/**
 * main - main point
 * @argc: count
 * @argv: vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (argc > i)
	{
		puts(argv[i]);
		i++;
	}
	return (0);
}
