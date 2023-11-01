/**
 * _strspn - find number of accept
 * @accept: accept srting
 * @s: main string
 * Return: number of occurences
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, say = 0;

	while (*(s) != 32)
	{
		while (*(accept + i) != '\0')
		{
			if (*(s) == *(accept + i))
				say++;
			i++;
		}
		i = 0;
		s++;
	}
	return (say);
}
