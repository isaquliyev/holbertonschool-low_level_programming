#include<stdio.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	unsigned int i = 0;

	for (i = 0 ; i < strlen(a) ; i++)
	{
		putchar (a[i]);
	}
	return (1);
}
