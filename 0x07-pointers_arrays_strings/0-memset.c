#include <stdio.h>
/**
 * *_memset - Fills the memory with constant byte
 *
 * @S: Character pointer
 * @b: A character
 * @n: Unsigned integer
 * Return: Pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned *p = s;

	while (n-- > 0)
	{
		*p++ = (unsigned)b;
	}
	return (p);
}
