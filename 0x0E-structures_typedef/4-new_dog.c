#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - copy a string to allocated memory after allocating it
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicate string or NULL (in case of failure to
 *	allocate memory or if str is NULL)
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);

	for (i = 0 ; i < len ; i++)
		ptr[i] = str[i];
	ptr[len] = '\0';

	return (ptr);
}

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

	dog->name = _strdup(name);
	dog->age = age;
	dog->owner = _strdup(owner);

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
