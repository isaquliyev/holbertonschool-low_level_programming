#include "main.h"
/**
 * _isalpha - check lowercase.
 *
 * @c: variable
 *
 * Return: if isalpha 1, otherwise 0.
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
