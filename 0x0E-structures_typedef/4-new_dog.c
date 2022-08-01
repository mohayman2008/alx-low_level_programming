#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new object of type dog_t
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner's name
 *
 * Return: A pointer to the newly created object or NULL (if any error happens)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(*dog));

	if (dog == NULL)
		return (NULL);

	if (name)
		dog->name = strdup(name);
	else
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;

	if (owner)
		dog->owner = strdup(owner);
	else
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
