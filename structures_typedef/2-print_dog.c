#include <stdio.h>
#include "dog.h"
/**
 *print_dog - function that prints a struct dog
 *@d: input
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL && d->owner == NULL)
	{
		d->name = "(nil)";
		d->owner = "(nil)";
	}
	else
	{
		printf("name: %s\n", d->name);
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
	}
}
