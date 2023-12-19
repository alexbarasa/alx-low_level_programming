#include <stdio.h>
/**
 * print_sign - Checks the sign of a number
 *
 * Return: 0 or 1 depending on the sign
 * @n: A character.
 */
int print_sign(int n)
{
	static char positive[3];
	static char negative[3];
	static char zero[3];

	if (n > 0)
	{
		strcpy(positive, "+");
		return (1);
	}
	else if (n < 0)
	{
		return (negative);
	}
	else
	{
		return (zero);
	}
}
