#include <stdio.h>
/**
 * _islower - Checks for lower characters
 *
 * Return: Always 0.
 * @c: A character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
