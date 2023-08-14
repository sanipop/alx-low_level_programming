#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - CLEAR allocated memory
 * @d: data type to clear
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

