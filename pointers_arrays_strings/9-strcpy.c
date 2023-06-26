#include "main.h"
/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: pointer to the copied string
 *@src: source of the string we want to copy
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
