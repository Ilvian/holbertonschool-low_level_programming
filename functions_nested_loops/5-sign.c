#include "main.h"
/**
 * print_sign - it takes an argument c of value integer
 * @n: integer
 * Return: 1 and prints + if the number is greater than zero
 * returns 0 and prints 0 if the number is 0
 * returns -1 and prints - if the numbers is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
		{
			_putchar ('-');
			return (-1);
		}
}
