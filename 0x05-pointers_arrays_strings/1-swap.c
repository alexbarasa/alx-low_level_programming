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

	putchar(&a);
	putchar(',');
	putchar(' ');
	putchar(&b);
	tmp = *a;
	*a = *b;
	*b = tmp;
	putchar(&a);
	putchar(',');
	putchar(' ');
	putchar(&b);
}
