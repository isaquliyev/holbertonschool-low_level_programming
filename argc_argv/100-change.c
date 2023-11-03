#include <stdio.h>
#include <stdlib.h>
/**
 * main - main point
 * @argc: count of numbers
 * @argv: given vector
 * Return: if argc = 2 finds minumum coins
 */
int main(int argc, char **argv)
{
	int num, counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	while (num != 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else
			num--;
		counter++;
	}
	printf("%d\n", counter);
	return (0);
}
