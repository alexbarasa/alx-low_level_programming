#include <stdio.h>
/**
 * _islower - Checks for lower characters
 *
 * Return: Always 0.
 * @c: A character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
