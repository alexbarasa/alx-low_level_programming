#include <stdio.h>
/**
 * puts2 - prints a string
 *
 * @str: Character pointer
 * Return: None
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str += 2;
	}
	putchar('\n');
}
