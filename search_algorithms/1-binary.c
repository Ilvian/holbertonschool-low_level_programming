#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: Index where the value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle;
	int i;

	if (array == NULL || !value)
		return (-1);
	while (right >= left)
	{
		middle = (right + left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == left)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
	}
	return (-1);
}
