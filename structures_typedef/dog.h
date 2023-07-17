#ifndef DOG_H
#define DOG_H
/**
 *struct dog - user-defined structure in C that represents a dog
 *@name: input
 *@age: input
 *@owner: input
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
Dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

