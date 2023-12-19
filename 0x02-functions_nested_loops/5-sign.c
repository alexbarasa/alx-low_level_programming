#include <stdio.h>
/**
 * print_sign - Checks the sign of a number
 *
 * Return: 0 or 1 depending on the sign
 * @n: A character.
 */
int print_sign(int n)
{
	int p = '1';
	int c;

	if (n > 0)
	{
		c = putchar('+' + p);
		return (c);
	}
	else if (n < 0)
	{
		return ('-' + p);
	}
	else
	{
		putchar('0');
		putchar('0');
		return (0);
	}
}
