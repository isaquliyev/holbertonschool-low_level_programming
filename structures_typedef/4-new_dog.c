#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return(dog);
}
