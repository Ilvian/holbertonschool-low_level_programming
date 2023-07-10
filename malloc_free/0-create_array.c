#include "main.h"
#include <stdlib.h>
/**
 *create_array - function that creates an array of chars,
 *and initializes it with a specific char
 *@size: input
 *@c: input
 *Return: return 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

