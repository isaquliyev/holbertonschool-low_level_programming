#include <string.h>
/**
 * infinite_add - add to numbers as string
 * @num1: number 1
 * @num2: number 2
 * @result: result
 * @size_r: buffer size
 * Return: result
 */
char *infinite_add(char *num1, char *num2, char *result, int size_r)
{
	int len1 = strlen(num1), len2 = strlen(num2), sum, i, len3, resultLength;
	int maxLength, resultArr[1000] = {0}, carry = 0, digit1, digit2;

	maxLength = (len1 > len2) ? len1 : len2;
	for (i = 0; i < maxLength; i++)
	{
		if (i < len1)
			digit1 = num1[len1 - i - 1] - '0';
		else
			digit1 = 0;
		if (i < len2)
			digit2 = num2[len2 - i - 1] - '0';
		else
			digit2 = 0;
		sum = digit1 + digit2 + carry;
		*(resultArr + i) = sum % 10;
		carry = sum / 10;
	}
	if (carry > 0)
	{
		resultArr[maxLength] = carry;
		maxLength++;
	}
	resultLength = maxLength;
	for (i = 0; i < maxLength; i++)
		*(result + i) = resultArr[maxLength - i - 1] + '0';
	*(result + resultLength) = '\0';
	len3 = strlen(result);
	if (len3 >= size_r)
		result = 0;
	return (result);
}
