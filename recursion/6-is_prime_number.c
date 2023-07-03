#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * prime- function
 * @n: number
 * @m: number
 * Return: number
 */

int prime(int n, int m)
{
	if (n % m == 0)
		return (0);
	else if (m * m > n)
		return (1);
	return (prime(n, m + 1));
}
/**
 * is_prime_number - function
 * @n: number
 * Return: number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
