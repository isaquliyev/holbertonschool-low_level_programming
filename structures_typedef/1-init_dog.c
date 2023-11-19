#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize valuse to dog
 * @d: dog structure
 * @name: name of dog
 * @age: age of th dog
 * @owner: owner of the dog
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
