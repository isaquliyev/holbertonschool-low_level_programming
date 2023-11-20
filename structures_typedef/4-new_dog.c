#include "dog.h"
#include <string.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(name));
	for (i = 0; i < (int)strlen(name); i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	dog->owner = malloc(sizeof(owner));
	for (i = 0; i < (int)strlen(owner); i++)
                dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	free(dog);
	return(dog);
}
