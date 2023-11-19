#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints details of dog
 * @d: dog structure
 * Return: nothing
 */.
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("%s\n", "(nil)");
	else
		printf("%s\n", d->name);
	if (d->age == NULL)
		printf("%s\n", "(nil)");
	else
		printf("%d\n", d->age);
	if (d->owner == NULL)
		printf("%s\n", "(nil)");
	else
		printf("%s\n", d->owner);
}
