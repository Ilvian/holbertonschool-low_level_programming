#include "main.h"
/**
 * _isupper - main function
 * @c: parameter
 * Return: 1 if uppercase and 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
