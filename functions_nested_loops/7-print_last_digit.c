#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int ld;
		ld = n % 10;
		_putchar (ld + '0');
	return (ld);
}
