#include <stdio.h>
/**
 * *_memcpy - Copies bytes from one memory to another memory
 *
 * @dest: Destination memory
 * @src: source memory
 * @n: Integer
 * Return: Pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;

	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
