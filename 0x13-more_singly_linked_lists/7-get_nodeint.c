#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/*get_nodeint_at_index - Gets the node at a specified index
 *
 * @head: The head pointer
 * @index: The index of the node to be returned
 * Return: The index of the specified node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
