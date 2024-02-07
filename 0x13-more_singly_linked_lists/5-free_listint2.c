#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees the list_t list
 *
 * @head: Pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return;
	current = *head;
	while (current->next != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		temp = NULL;
	}
	*head = NULL;
}
