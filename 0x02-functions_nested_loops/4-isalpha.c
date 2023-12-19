#include <stdio.h>
/**
 * _isalpha - Checks for lower characters
 *
 * Return: A 0 or 1.
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
