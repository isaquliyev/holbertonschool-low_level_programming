#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - main point
 * @argc: count of arguments
 * @argv: two dimensional arguments array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((*op != '*' && *op != '/' && *op != '+' && *op != '-' && *op != '%')
			|| strlen(op) > 1)
	{
		printf("Error2\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error3\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
