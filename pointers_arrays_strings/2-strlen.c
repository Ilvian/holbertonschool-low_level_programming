#include "main.h"
/**
 * _strlen - main function
 * Return: returns l
 * @s: string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
