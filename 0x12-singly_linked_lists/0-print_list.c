#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * print_list - Prints all the elements of list_t list
 *
 * @h: Pointer to the nodes memory
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%ld] ", len);
			printf("(nil)\n");
		}
		else
		{
			printf("[%u] %s\n", _strlen(current->str), current->str);
		}
		len++;
		current = current->next;
	}
	return (len);
}
/**
 * _strlen - Calculates the length of a string
 *
 * @s: Character pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
