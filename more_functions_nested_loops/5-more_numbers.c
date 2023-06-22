#include "main.h"

/**
 * print_alphabet - prints all alhpabet
 * letters in lowercase
 */
void more_numbers(void)
{
	int n;
	int c;

	for (c = 0; c < 15; c++)
	{
		for (n = 0; n < 11; n++)
		{
			if (n > 9)
			_putchar ((n / 10) + '0');
		}
		_putchar ((c % 10) + '0');
		}
	_putchar ('\n');
}
