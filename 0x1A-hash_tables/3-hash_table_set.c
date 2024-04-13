#include <string.h>
#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add/update the key/value pair
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	/* Check if key already exists in the hash table */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			/* Update the value and return */
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* Duplicate the key and value */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	/* Add the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
