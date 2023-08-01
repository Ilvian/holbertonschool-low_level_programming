#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *sum_dlistint - function that returns the
 *sum of all the data of a dlistint_t linked list
 *@head: input
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
