#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - function that adds a new node at the beginning
 *@head: input
 *@n: input
 *Return: new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);

}
