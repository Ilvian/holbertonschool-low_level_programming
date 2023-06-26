#include "main.h"
/**
 * _strlen - main function
 * Return: returns l
 * @s: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}
	_putchar ('\n');
}
