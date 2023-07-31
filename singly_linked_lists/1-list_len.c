#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of nodes
 *@h: input
 *Return: x num of nodes
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}

	return (x);
}
