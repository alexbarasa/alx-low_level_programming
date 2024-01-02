#include <stdio.h>
#include <string.h>
int _strlen(char *str);
/**
 * rev_string - Prints a reversed string
 *
 * @s: Character pointer
 * Return: None
 */
void rev_string(char *s)
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
/**
 * _strlen - Calculates the length of a string
 *
 * @str: Character pointer
 * Return: Always 0.
 */
int _strlen(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
