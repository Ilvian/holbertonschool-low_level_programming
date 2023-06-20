#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int ld;
	if (n < 0)
	{
		n = -n;
	}

		ld = n % 10;
		if (ld < 0)
		{
			ld = -ld;
		}

		_putchar (ld + '0');
	return (ld);
}
