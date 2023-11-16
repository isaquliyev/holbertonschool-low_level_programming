#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = *(argv + 1), s2 = *(argv + 2);
	if (argc != 3 || atoi(s1) == 0 || atoi(s2) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (result == NULL)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		*(result + i) = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
