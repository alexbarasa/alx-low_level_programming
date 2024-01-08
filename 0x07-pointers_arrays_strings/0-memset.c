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
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (p);
}
