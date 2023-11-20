#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - initialize new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: ownerof dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	return (dog);
}
