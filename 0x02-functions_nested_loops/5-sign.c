#include <stdio.h>
/**
 * print_sign - Checks the sign of a number
 *
 * Return: 0 or 1 depending on the sign
 * @n: A character.
 */
int print_sign(int n)
{
	static const char positive[] = "+1";
	static const char negative[] = "-1";
	static const char zero[] = "00";

	if (n > 0)
	{
		return (positive);
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
