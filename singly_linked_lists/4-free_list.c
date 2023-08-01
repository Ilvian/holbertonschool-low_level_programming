#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *free_list - function that frees all memory allocated to a linked list
 *@head: input
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_list(head->next);
	}
		free(head->str);
		free(head);
}
