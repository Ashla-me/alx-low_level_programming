#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: A pointer to the hash table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char coma_f = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (coma_f == 1)
			{
				printf(", ");
			}

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			coma_f = 1;
		}
	}
	printf("}\n");
}
