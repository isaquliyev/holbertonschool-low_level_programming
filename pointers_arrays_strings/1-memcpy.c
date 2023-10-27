/**
 * _memcpy - copy n element from src to dest
 * @dest: destination
 * @src: source
 * @n: number of elements
 * Return: new char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*(dest + n - 1) = *(src + n - 1);
		n--;
	}
	return (dest);
}
