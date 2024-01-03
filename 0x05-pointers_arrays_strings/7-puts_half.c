#include <stdio.h>
#include <string.h>
/**
 * puts_half - Prints last half of a string
 *
 * @str: Pointer to the string
 * Return: None
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i;

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			putchar(str[i]);
	}
	else
	{
		for (i = (length + 1) / 2; i < length; i++)
			putchar(str[i]);
	}
	putchar('\n');
}
