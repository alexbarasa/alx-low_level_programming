#include <stdio.h>
#include "main.h"
/**
 * _strspn - Calculates the number of bytes in the initial segment
 * of s which consists only bytes of the specified string
 *
 * @s: String pointer
 * @accept: string pointer
 * Return: Length in bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
