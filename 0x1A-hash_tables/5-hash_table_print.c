#include "hash_tables.h"

/**
 * hash_table_print - short description
 *
 * @ht: hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int array_index;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (array_index = 0; array_index < ht->size; array_index++)
	{
		current_node = ht->array[array_index];
		while (current_node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", current_node->key,
					current_node->value);
			flag = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
