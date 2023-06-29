#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: memory area
 *@accept: memory area
 *Return: return copied string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, len, j;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (len);
		}
	}
	return (len);
}
