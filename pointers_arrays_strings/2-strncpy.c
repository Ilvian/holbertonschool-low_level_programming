#include "main.h"
/**
 *_strncpy -  function that copies a string
 *@dest: destination
 *@src: src
 *@n: n bytes to be copied
 *Return: return copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
