#include "main.h"
/**
 *_strcmp -  function that copies a string
 *@s1: first string to be compared
 *@s2: string to be compared with s1
 *Return: returns an integer indicating the result of the
 *comparison
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
