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
	int len_s = 0, i = 0, j = 0, id = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len_s += strlen(av[i]) + 1;
	s = (char *)malloc(len_s * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			s[id] = av[i][j];
			id++;
		}
		s[id] = '\n';
		id++;
	}
	s[id] = '\0';
	return (s);
}
