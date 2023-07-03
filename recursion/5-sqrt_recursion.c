#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * sqrtrec - function
 * @n: number
 * @root: root
 * Return: n
 */
int sqrtrec(int n, int root)
{
	if (root * root == n)
	return (root);
	if (root == n / 2)
	return (-1);
	else
	return (sqrtrec(n, root + 1));
}
/**
 * _sqrt_recursion - function
 * @n: number
 * Return: number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	if (n == 1)
	return (n);
	else
	return (sqrtrec(n, 0));
}
