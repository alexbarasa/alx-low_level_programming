#include <stdio.h>
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
