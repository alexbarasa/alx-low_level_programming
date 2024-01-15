#include <stdio.h>
/**
 * _abs - Converts any given integer value 
 * to absolute value
 *
 * @n: Integer
 * Return: Absolute value of a given integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (n);
}
