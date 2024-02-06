#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Adds an integer node
 *
 * @head: StructPointer to a node
 * @n: Integer
 * Return: The address of the new node/NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	const int num = n;

	new_node = (listint_l *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node = num;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
