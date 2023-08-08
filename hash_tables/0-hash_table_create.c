#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: input
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table;

	n_table = malloc(sizeof(hash_table_t));
	if (n_table == NULL)
		return (NULL);
	n_table->array = calloc(size, sizeof(hash_node_t *));
	if (n_table->array == NULL)
	{
		free(n_table);
		return (NULL);
	}
	n_table->size = size;
	return (n_table);
}
