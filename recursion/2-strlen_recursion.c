/**
 * _strlen_recursion - finds length of string
 * @s: given string
 * Return: integer which is equal to length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
