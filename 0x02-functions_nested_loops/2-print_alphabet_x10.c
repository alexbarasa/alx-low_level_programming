#include <stdio.h>
/**
 * print_alphabet_x10 - Prints alphabets x10
 *
 * Return: No value.
 */
void print_alphabet_x10(void)
{
	int i, k;
	int j = 'z';
	i
	k = 0;

	while (k < 10)
	{
		for (i = 'a'; i <= j; i++)
		{
			putchar(i);
		}
		putchar('\n');
		k++
	}
}
