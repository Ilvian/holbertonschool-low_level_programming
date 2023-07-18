#include <stdio.h>
/**
 *array_iterator - executes a given functions as a prameter on each
 *elemnt of an array
 *@array: given array to iterate
 *@size: size of the array
 *@action: callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < (int) size; i++)
			action(array[i]);
	}
}
