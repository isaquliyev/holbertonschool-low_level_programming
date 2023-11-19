#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints details of dog
 * @d: dog structure
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("%s\n", "(nil)");
	else
		printf("%s\n", d->name);
	printf("Age: ");
	if (!d->age)
		printf("%f\n", 0.);
	else
		printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("%s\n", "(nil)");
	else
		printf("%s\n", d->owner);
}
