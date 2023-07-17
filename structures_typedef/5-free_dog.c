#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated by a dog struct
 * @d: dog pointer
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
