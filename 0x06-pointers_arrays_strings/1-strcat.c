#include <stdio.h>
/**
 * _strcat - Function that concatinates two strings
 *
 * @dest: Destination string pointer
 * @src: source string pointer
 * @n: Integer
 * Return: Concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (original_dest);
}
