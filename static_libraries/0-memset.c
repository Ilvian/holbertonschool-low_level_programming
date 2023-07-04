#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: address of memory to be filled
 *@b: the value
 *@n: n bytes to be changed
 *Return: return copied string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
