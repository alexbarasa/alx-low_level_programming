#include <stdio.h>
/**
 * print_sign - Checks the sign of a number
 *
 * Return: 0 or 1 depending on the sign
 * @n: A character.
 */
int print_sign(int n)
{
	int sign;
	
	if (n < 0)
	{
		int v;
		sign = -(v < 0);
		return (sign);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		putchar('0');
		putchar('0');
		return (0);
	}
}
