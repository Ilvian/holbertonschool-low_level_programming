#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z'; letter ; letter != 'q' && letter != 'e')
		putchar(letter);
	putchar('\n');
	return (0);
}
