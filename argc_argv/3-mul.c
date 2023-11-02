#include <stdio.h>
/**
 * main - main point
 * @argc: count
 * @argv: vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc > 2)
		printf("%d\n", (argv[1][0] - 48) * (argv[2][0] - 48));
	else
		printf("Error\n");
	return (0);
}
