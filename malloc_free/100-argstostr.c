#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac: argc
 * @av: argv
 * Return: char array
 */
char *argstostr(int ac, char **av)
{
	int len_s = 0, i = 0, j = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len_s += strlen(av[i]);
	s = malloc(len_s + ac + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '0'; j++)
		{
			*s = av[i][j];
			s++;
		}
		*s = '\n';
		s++;
	}
	*s = '\0';
	return (s);
}
