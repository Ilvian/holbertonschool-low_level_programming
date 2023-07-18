#include <stdio.h>
#include "dog.h"
/**
 *print_dog - function tha prints a struct dog
 *@d: struct pointer
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL && d->owner == NULL)
		{
			d->name = "(nil)";
			d->owner = "(nil)";
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
