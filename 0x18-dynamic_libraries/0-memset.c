#include <stdio.h>
/**
 * *_memset - Fills the memory with constant byte
 *
 * @s: Character pointer
 * @b: A character
 * @n: Unsigned integer
 * Return: Pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n-- > 0)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
