#include "hash_tables.h"

/**
 * create_node - create new node
 * @key: key
 * @value: value
 * Return: Node(new) or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (NULL);
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode);
		return (NULL);
	}
	newnode->next = NULL;
	return (newnode);
}


/**
 * hash_table_set - adds element to ht
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node;
	hash_node_t *tmp;
	char *newvalue;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
	strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			newvalue = strdup(value);
			if (newvalue == NULL)
				return (0);
			free(tmp->value);
			tmp->value = newvalue;
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = create_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}


