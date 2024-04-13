#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Finds the first occurrence of any character from
 * a specified string
 *
 * @s: String pointer
 * @accept: String pointer
 * Return: Pointer to the byets
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
