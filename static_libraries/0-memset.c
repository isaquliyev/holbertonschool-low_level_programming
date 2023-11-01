/**
 * _memset - memset
 * @s: source
 * @b: substitution char
 * @n: number of bs
 * Return: modified s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*(s + n - 1) = b;
		n--;
	}
	return (s);
}
