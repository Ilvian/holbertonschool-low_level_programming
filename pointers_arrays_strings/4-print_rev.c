#include "main.h"
/**
 * print_rev - main function
 * @s: param
 */
void print_rev(char *s)
{
	int l = 0;
	int r;

	while (s[l] != '\0')
	{
		l++;
	}
	for (r = l - 1; r >= 0; r--)
		_putchar (s[r]);
	_putchar ('\n');
}
