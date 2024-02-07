#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a specified index
 * @head: Head pointer
 * @index: Index of the node to be deleted
 * Return: 1 if success and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
