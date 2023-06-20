#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int x;
	int y;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
			printf ("%d\n", x);
		}
	}
	else if (n >= 98)
	{
	for (y = n; y >= 98; y--)
	{
	if (y != 98)
	printf("%d, ", y);
	else if (y == 98)
	printf ("%d\n", y);
	}
	}
}	
