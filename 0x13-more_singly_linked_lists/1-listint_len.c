#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - Prints how many elements in list_t list
 *
 * @h: Pointer to the nodes memory
 * Return: Number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
