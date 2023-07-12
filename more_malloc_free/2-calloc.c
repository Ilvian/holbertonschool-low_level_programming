#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *_calloc - function that allocates memoro
 *@nmemb: amount of members
 *@size: byte size of the member
 *Return: null pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = calloc(nmemb, size);
	if (array == NULL)
		return (NULL);
	return (array);
}
