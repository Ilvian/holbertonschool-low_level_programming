#include "main.h"
/**
 * print_last_digit - it takes an argument of
 * type int and returns its last digit
 * @n: integer
 * Return: the last digit of the number
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
