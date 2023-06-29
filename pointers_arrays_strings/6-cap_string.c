#include "main.h"
/**
 * cap_string - main func
 *
 * @str: is a parameter
 * Return: return 1
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 0 && str[i] < 47 && str[i] != '-')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i--;
		}
		if (str[i] > 122 || (str[i] > 57 && str[i] < 65))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i--;
		}
	}
	return (str);
}
