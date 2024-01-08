#include <stdio.h>
char *_strchr(char *s, char c);
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
/**
 * *_strchr - Checks for the first occurence of a given character
 *
 * @s: String pointer
 * @c: Character to be checked
 * Return: Pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
