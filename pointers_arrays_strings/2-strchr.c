/**
 * _strchr - function
 * @s: source
 * @c: special character
 * Return: modified string
 */
char *_strchr(char *s, char c)
{
	while (*(s) != c || *(s) != '\0')
		s++;
	return (s);
}
