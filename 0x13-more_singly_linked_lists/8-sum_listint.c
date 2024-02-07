#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Calculates the sum of a given listint_t list
 *
 * @head: Head pointer
 * Return: Sum of the listint_t list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
