#include "main.h"
/**
 * print_triangle - main function
 * @size: parameter
 * Return: 1 if uppercase and 0 if false
 */
void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar ('\n');
	else
		{
			for (x = 0; x < size; x++)
			{
				for (y = x; y <= size; y++)
				{
					_putchar (' ');
				}
				for (y = 0; y <= x; y++)
				{
					_putchar ('#');
				}
				_putchar ('\n');
			}
		}
}
