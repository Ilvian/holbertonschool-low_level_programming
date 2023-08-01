#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - function that adds a new node at the end
 *@head: input
 *@n: input
 *Return: new
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
		temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}

