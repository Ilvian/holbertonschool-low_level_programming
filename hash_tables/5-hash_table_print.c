#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *delim = "";

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("%s'%s': '%s'", delim, node->key, node->value);
			delim = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
