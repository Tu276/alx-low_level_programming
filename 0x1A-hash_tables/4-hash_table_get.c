#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value
 * @ht: hash table
 * @key: key
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht->size == 0 || ht == NULL || strlen(key) == 0 || key == NULL
	|| ht->array == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}


