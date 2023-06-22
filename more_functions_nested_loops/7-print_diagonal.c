#include "main.h"

/**
 * print_alphabet - prints all alhpabet
 * letters in lowercase
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
		_putchar ('\n');
	else
		{
			for (x = 0; x < n; x++)
			{
				for (y = 0; y < n; y++)
				{
					if (x == y)
						_putchar ('\\');
					else if (y < x)
						_putchar (' ');
				}
				_putchar ('\n');
			}
		}

}
