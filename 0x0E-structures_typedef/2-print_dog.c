#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Print the members of a struct dog object
 * @d: pointer to the struct dog object
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
