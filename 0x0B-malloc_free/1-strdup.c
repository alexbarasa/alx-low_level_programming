#include <stdio.h>
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/**
 * *_strdup - Duplicates a given string
 *
 * @str: Charater pointer
 * Return: Duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate = (char *)malloc(_strlen(str) + 1);

	if (str == NULL)
		return (NULL);
	if (duplicate == NULL)
		return (NULL);
	_strcpy(duplicate, str);
	return (duplicate);
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
/**
 * _strcpy - Copies a given number of characters into the given string
 *
 * @dest: Destination string
 * @src: Source string
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *originalDest = dest;

	while ((*dest++ = *src++) != '\0')
		;
	return (originalDest);
}
