#include <stdio.h>
#include <stdlib.h>
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * *_str_concat - Concates tow given strings
 *
 * @s1: Charater pointer
 * @s2: Character pointer
 * Return: Concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	concat = (char *)malloc(_strlen(s1) + _strlen(s2) + 1);
	if (concat == NULL)
		return (NULL);
	_strcpy(concat,  s1);
	_strcat(concat, s2);
	return (concat);
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
 * _strcat - Function that concatinates two strings
 *
 * @dest: Destination string pointer
 * @src: source string pointer
 * Return: Concatinated string
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (original_dest);
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
