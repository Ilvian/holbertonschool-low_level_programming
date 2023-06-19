#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dc;

	for (dc = 48 ; dc < ':' ; dc++)
	{
		putchar(dc);
		if (dc != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
