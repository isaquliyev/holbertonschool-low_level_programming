#include <stdlib.h>
#include <stdio.h>
/**
 * main - main point
 * @argc: number of arguments passed
 * @argv: arguments vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int num = atoi(argv[1]), i;
	int (*memory_checker)(int, char **) = main;
	char opcode;

	if (argc != 2)
		printf("Error\n"), exit(1);
	if (num < 0)
		printf("Error\n"), exit(2);
	for (i = 0; i < num; i++)
	{
		opcode = *(char *)memory_checker;
		if (i == num - 1)
			printf("%.2x", opcode);
		else
			printf("%.2x ", opcode), memory_checker++;
	}
	printf("\n");
	return (0);
}
