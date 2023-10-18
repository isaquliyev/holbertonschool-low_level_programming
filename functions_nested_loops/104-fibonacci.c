#include <stdio.h>
#include <string.h>
/**
 * addLargeNumbers - func
 *
 * Return: bla bla bla
 *
 * @num1: var1
 * @num2: var2
 * @result: var3
 */

char *addLargeNumbers(char num1[], char num2[], char result[])
{
	int len1 = strlen(num1), len2 = strlen(num2);

	int maxLength = len2, resultArr[1000] = {0}, carry = 0, digit1, digit2;

	int sum, i;

	for (i = 0; i < maxLength; i++)
	{
		if (i < len1)
		{
			digit1 = num1[len1 - 1 - i] - '0';
		}
		else
		{
			digit1 = 0;
		}
		if (i < len2)
		{
			digit2 = num2[len2 - 1 - i] - '0';
		}
		else
		{
			digit2 = 0;
		}
	sum = digit1 + digit2 + carry;
	resultArr[i] = sum % 10;
	carry = sum / 10;
	}
	if (carry > 0)
	{
		resultArr[maxLength] = carry;
		maxLength++;
	}
	int resultLength = maxLength;

	for (i = 0; i < maxLength; i++)
		result[i] = resultArr[maxLength - 1 - i] + '0';
	result[resultLength] = '\0';
	return (result);
}
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char num1[100] = "1";
	char num2[100] = "2";
	char result[1001];
	int c = 0;

	while (c < 98)
	{
		printf("%s", num1);
		if (c < 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		char *temp = addLargeNumbers(num1, num2, result);

		strcpy(num1, num2);
		strcpy(num2, temp);
		c++;
	}
	return (0);
}
