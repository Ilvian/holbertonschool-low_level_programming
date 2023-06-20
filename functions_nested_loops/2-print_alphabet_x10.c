#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int numTimes;

	numTimes = 0;
	while (numTimes < 10)
	{
		char letter;

		letter = 'a';
			while (letter <= 'z')
		{
			_putchar(letter);
				letter++;
		}
		_putchar ('\n');
			numTimes++;
}
}
