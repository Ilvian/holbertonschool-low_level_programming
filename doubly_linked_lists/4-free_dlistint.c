#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *free_dlistint - function that frees all memory allocated to a linked list
 *@head: input
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
