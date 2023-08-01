#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *get_dnodeint_at_index - function that returns
 *the nth node of a dlistint_t linked list
 *@head: input
 *@index: input
 *Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
