#include <string.h>
#include <stddef.h>
/**
 * _strstr - substring
 * @haystack: main string
 * @needle: substring
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, counter = 0, len = strlen(needle);

	while (*(haystack) != '\0')
	{
		while (*(needle + i) != '\0')
		{
			if (*(haystack + i) == *(needle + i))
				counter++;
			i++;
		}
		i = 0;
		if (counter == len)
			return (haystack);
		counter = 0;
		haystack++;
	}
	return (NULL);
}
