#include <stdio.h>
/**
 * print_alphabet - prints alphabets a-z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	int j = 'z';

	for (i = 'a'; i <= j; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
