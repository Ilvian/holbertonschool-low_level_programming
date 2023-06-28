#include "main.h"
/**
 *string_toupper -  function that changes all the lowercase letters
 * of a string to uppercase
 *@s: pointer to string literal
 *Return: the string in uppercase
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
