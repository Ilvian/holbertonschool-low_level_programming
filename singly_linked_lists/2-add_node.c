#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_node - function that adds a new node at the beginning
 *@head: input
 *@str: input
 *Return: new
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t len = strlen(str);
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = malloc(sizeof(char) * len);

	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}
	strcpy(new->str, str);
	new->len = len;
	new->next = (*head);
	*head = new;

	return (new);

}
