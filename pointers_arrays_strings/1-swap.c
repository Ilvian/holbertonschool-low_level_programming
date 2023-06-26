#include "main.h"
/**
 * swap_int - main function
 * @b: param
 * @a: param
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
