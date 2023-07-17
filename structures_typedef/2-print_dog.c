#include <stdio.h>
#include "dog.h"

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
		 printf("name: %s", d->name);
		 printf("age: %f", d->age);
		 printf("owner: %s", d->owner);
	 }
}
