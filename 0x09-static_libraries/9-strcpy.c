#include <stdio.h>
/**
 * _strncpy - Copies a given number of characters into the given string
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Integer
 * Return: Copied string
 */
char* strcpy(char *dest, char *src) {
	char *originalDest = dest;

	while ((*dest++ = *src++) != '\0')
		;
	return originalDest;
}
