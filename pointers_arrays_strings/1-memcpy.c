#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: memory area
 *@src: memory area
 *@n: n bytes to be copied
 *Return: return copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
