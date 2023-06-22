#include "main.h"
/**
 * print_alphabet_x10 - prints all alhpabet
 * letters in lowercase 10 times
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
