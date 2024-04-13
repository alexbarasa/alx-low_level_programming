#include "php_hash_table.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table,
 *         or NULL if something went wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table = NULL;
	unsigned long int i;

	/* Allocate memory for the sorted hash table structure */
	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
		return (NULL);
	/* Allocate memory for the array of pointers */
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}
	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;
	shash_table->size = size;
	shash_table->shead = NULL;
	shash_table->stail = NULL;
	return (shash_table);
}
/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table to add/update the key/value pair
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current, *prev = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	/* Create a new node */
	new_node = malloc(sizeof(shash_node_t));
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
	/* Find the correct position to insert th */
	/* new node in the sorted linked list */
	current = ht->shead;
	while (current != NULL && strcmp(current->key, key) < 0)
	{
		prev = current;
		current = current->snext;
	}
	/* Insert the new node into the sorted linked list */
	if (prev == NULL)
	{
		new_node->snext = ht->shead;
		ht->shead = new_node;
	}
	else
	{
		prev->snext = new_node;
		new_node->snext = current;
	}
	/* Update stail if necessary */
	if (current == NULL)
		ht->stail = new_node;
	/* Add the new node to the array of the hash table */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
/**
 * shash_table_get - Retrieves a value associated with a
 * key from the sorted hash table
 * @ht: The sorted hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	/* Traverse the linked list at the calculated index */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - Prints a sorted hash table using
 * the sorted linked list
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
		node = node->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse
 * order using the sorted linked list
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
		node = node->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	/* Free memory for each linked list in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	/* Free memory for the array */
	free(ht->array);
	/* Free memory for the sorted linked list */
	while (ht->shead != NULL)
	{
		node = ht->shead;
		ht->shead = ht->shead->snext;
		free(node->key);
		free(node->value);
		free(node);
	}
	/* Free memory for the hash table structure */
	free(ht);
}
