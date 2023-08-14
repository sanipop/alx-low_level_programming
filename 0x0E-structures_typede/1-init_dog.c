#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a dog's details
 * @d: Pointer to the dog structure to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

