#include "main.h"

/**
 * print_alphabet - prints all alhpabet
 * letters in lowercase
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar ('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar ('#');
			}
		_putchar ('\n');
		}
	}
}
