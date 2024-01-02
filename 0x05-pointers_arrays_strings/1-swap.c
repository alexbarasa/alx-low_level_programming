#include <stdio.h>
/**
 * swap_int - Swaps two integers
 *
 * @a: Integer pointer
 * @b: Integer pointer
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
