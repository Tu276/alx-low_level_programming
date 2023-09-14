#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: V
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char fncheck = 0;

	if (ht == NULL; ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (fncheck == 1)
				printf(",");

			printf("'%s': '%s'", tmp->key, tmp->value);
			fncheck = 1;
			tmp = tmp->next;
		}
	}
	print("}\n");
}

