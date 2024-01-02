#include <stdio.h>
#include "main.h"
/**
 * print_rev - Prints a reversed string
 *
 * @s: Character pointer
 * Return: None
 */
void print_rev(char *s)
{
	int i, j;
	char *begin_ptr, *end_ptr, tmp;

	j = _strlen(s);
	begin_ptr = s;
	end_ptr = s;
	for (i = 0; i < j - 1; i++)
		end_ptr++;
	for (i = 0; i < j / 2; i++)
	{
		tmp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = tmp;
		begin_ptr++;
		end_ptr--;
	}
}
