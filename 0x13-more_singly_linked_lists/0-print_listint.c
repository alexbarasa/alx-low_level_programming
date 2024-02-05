#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - Prints all the integers in list_t list
 *
 * @h: Pointer to the nodes memory
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		printf(" %d\n", current->n);
		len++;
		current = current->next;
	}
	return (len);
}
