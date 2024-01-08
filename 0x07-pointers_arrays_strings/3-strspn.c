#include <stdio.h>
char *_strchr(char *s, char c);
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
