#include <stdio.h>
/**
 * _puts - prints a string
 *
 * @str: Character pointer
 * Return: None
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
