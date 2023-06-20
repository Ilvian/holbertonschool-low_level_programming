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
		ld = n % 10;
	else
		ld = n % 10;
	return (ld);
}
