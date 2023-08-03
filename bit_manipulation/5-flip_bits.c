#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: input
 * @m: input
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int c = 0;

	while (i)
	{
		c += i & 1;
		i >>= 1;
	}
	return (c);
}
