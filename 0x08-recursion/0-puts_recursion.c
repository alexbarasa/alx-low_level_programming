#include <stdio.h>
/**
 * _puts_recursion - Prints a string on stdout
 *
 * @s: Pointer to a string
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
