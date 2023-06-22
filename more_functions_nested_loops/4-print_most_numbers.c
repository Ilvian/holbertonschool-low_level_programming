#include "main.h"

/**
 * print_alphabet - prints all alhpabet
 * letters in lowercase
 */
void print_most_numbers(void)
{
	int n;
	for (n = 0; n < 10; n++)
		{
			if (n != 2 && n != 4)
				_putchar (n + '0');
		}
				_putchar ('\n');

}
