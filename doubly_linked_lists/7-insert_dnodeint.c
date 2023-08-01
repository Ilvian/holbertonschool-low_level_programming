#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *insert_dnodeint_at_index - function that inserts a new node
 *@h: input
 *@idx: input
 *@n: input
 *Return: new_n
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	new_n->prev = NULL;
	if (idx == 0)
	{
		new_n->next = *h;
		if (*h != NULL)
			(*h)->prev = new_n;
		*h = new_n;
			return (new_n);
	}
	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			free(new_n);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
	{
		temp->next = new_n;
		new_n->prev = temp;
	}
	else
	{
		new_n->next = temp->next;
		new_n->prev = temp;
		temp->next->prev = new_n;
		temp->next = new_n;
	}
	return (new_n);
}
