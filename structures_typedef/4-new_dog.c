#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 *new_dog - creates a new dog instance
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: new dog object instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));
	char *newname = malloc(strlen(name) + 1);
	char *newowner = malloc(strlen(owner) + 1);

	if (newdog == NULL || newname == NULL || newowner == NULL)
	{
		free(newname);
		free(newowner);
		free(newdog);
		return (NULL);
	}
	strcpy(newname, name);
	strcpy(newowner, owner);
	newdog->name = newname;
	newdog->owner = newowner;
	newdog->age = age;
	return (newdog);
}
