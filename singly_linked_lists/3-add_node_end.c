#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - function that adds a new node at the end
 *@head: input
 *@str: input
 *Return: new
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t length = strlen(str);
	list_t *new = NULL;
	list_t *p = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}

	new->len = length;
	if (p == NULL)
	{
		*head = new;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}

		p->next = new;
	}
	return (new);

}
