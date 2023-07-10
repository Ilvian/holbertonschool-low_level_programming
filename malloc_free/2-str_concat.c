#include "main.h"
#include <stdlib.h>
/**
 *str_concat - function that concatenates two strings
 *@s1: input
 *@s2: input
 *Return: return 0
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		a[i] = s2[j];
		i++, j++;
	}
	a[i] = '\0';
	return (a);
}
