#include <stdio.h>
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
