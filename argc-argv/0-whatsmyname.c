#include <stdio.h>
#include <stdlib.h>
/**
 * main - main point
 * @argc: count of numbers
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	puts(argv[argc - 1]);
	return (0);
}
