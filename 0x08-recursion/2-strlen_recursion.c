#include <stdio.h>
/**
 * _strlen_recursion - Calculates the length of the string
 *
 * @s: Pointer to astring
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s +1));
}
