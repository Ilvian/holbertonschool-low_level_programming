#include "main.h"
/**
 * print_line - main function
 * @n: parameter
 * Return: 1 if uppercase and 0 if false
 */
void print_line(int n)
{
	int x;

		if (n <= 0)
			_putchar ('\n');
		else
		{
			for (x = 0; x < n; x++)
			{
				_putchar ('_');
			}
			_putchar ('\n');
		}

}

