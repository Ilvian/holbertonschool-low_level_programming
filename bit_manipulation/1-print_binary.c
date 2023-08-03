#include "main.h"
#include <stdio.h>
/**
 *print_binary - function that prints the binary representation of a number
 *@n: input
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0;
	unsigned long int temp;

	temp = 1UL << ((sizeof(n) * 8) - 1);
	while (temp)
	{
		if (n & temp)
		{
			_putchar ('1');
			i = 1;
		}
		else if (i)
		{
			_putchar ('0');
		}
		temp >>= 1;
	}
	if (!i)
		_putchar ('0');
}
