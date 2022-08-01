#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize the members a declared variable of type struct dog
 * @d: pointer to the struct dog object
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
