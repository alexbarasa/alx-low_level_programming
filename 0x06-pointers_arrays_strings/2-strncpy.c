#include <stdio.h>
/**
 * _strncpy - Copies a given number of characters into the given string
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Integer
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (original_dest);
}
