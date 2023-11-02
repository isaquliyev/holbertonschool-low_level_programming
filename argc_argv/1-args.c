#include <stdio.h>
#include <string.h>
/**
 * main - main point
 * @argc: number of argv
 * @argv: vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
