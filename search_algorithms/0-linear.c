#include "search_algos.h"
/**
 * linear_search - Searches for a value in an integerarray using linear search.
 * @array: Pointer to the integer array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 * Return: The index of the first occurrence of @value in @array,
 * or -1 if @value is not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
