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

	dog->name = strdup(name);
	dog->age = age;
	dog->owner = strdup(owner);

	if (!dog->name || !dog->owner)
	{
		if (dog->name)
			free(dog->name);
		if (dog->owner)
			free(dog->owner);
		free(dog);
		return (NULL);
	}
	return (dog);
}
