#include "main.h"
/**
 * _islower - check lowercase.
 *
 * @c: variable
 *
 * Return: if islower 1, otherwise 0.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
