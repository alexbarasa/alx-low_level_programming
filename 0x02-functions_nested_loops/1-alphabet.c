#include <stdio.h>
/**
 * print_alphabet - prints alphabets a-z
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int i;
	int j = 'z';

	for (i = 'a'; i <= j; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
