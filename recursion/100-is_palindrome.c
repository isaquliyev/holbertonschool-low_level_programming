#include <string.h>
/**
 * polyndrome_checker - check the polyndrom using recursion
 * @s: given string
 * @i: iterator from begin
 * @n: iterator from end
 * Return: 1 if polyndrome, otherwise 0
 */
int polyndrome_checker(char *s, int i, int n)
{
	if (i == n)
		return (1);
	else if (*(s + i) != *(s + n))
		return (0);
	else if (i <= n)
		return (polyndrome_checker(s, i + 1, n - 1));
	return (1);
}
/**
 * is_palindrome - checks polyndrom using checker fun
 * @s: given string
 * Return: 1 if polyndrom
 */
int is_palindrome(char *s)
{
	int size = strlen(s);

	if (size == 0)
		return (1);
	return (polyndrome_checker(s, 0, size - 1));
}
