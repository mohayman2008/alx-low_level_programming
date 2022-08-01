#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory dynamically allocated to an object of type dog_t
 * @d: pointer to the dog_t object
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
