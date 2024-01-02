#include <stdio.h>
/**
 * print_numbers - Prints numbers 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i;
	int j = '9';

	for (i = '0'; i <= j; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
