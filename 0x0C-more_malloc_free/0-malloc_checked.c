#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - Allocates memory
 *
 * @b: Unsigned integer
 * Return: None
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	if (b == 0)
		exit(98);
	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
