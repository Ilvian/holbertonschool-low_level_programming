#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter;
	int t;

	t = 0;
	while (t < 10)
	{
		letter = 'a';
			while (letter <= 'z')
		{
			_putchar(letter);
				letter++;
		}
		_putchar ("\n");
			t++;
}
}
