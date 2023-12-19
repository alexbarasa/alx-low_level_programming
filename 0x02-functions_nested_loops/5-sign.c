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
	int v;

	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		v = n;
		sign = +(v > 0);
		return (sign);
	}
	else
	{
		putchar('0');
		putchar('0');
		return (0);
	}
}
