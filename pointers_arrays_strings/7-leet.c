#include "main.h"

/**
 * leet - main function
 * Return: returns sum
 * @string: param
 */
char *leet(char *string)
{
	int i, j;
	char lett[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (string[i] == lett[j])
			{
				string[i] = numbers[j];
			}
		}
	}
	return (string);
}
