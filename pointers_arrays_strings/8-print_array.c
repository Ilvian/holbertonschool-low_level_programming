#include "main.h"
#include <stdio.h>
/**
 *print_array - function that prints n elements of an array of integers
 *@a: pointer to the array
 *@n: he number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", (a[i]));
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
