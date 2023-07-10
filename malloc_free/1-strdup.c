#include "main.h"
#include <stdlib.h>
/**
 *_strdup - function that returns a pointer to a newly
 *allocated space in memory, which contains a
 *copy of the string given as a parameter
 *and initializes it with a specific char
 *@str: input
 *Return: return 0
 */
char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
		a[j] = str[j];
	return (a);
}
