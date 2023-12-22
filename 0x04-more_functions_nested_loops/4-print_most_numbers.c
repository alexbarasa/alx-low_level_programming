#include <stdio.h>
/**
 * print_most_numbers - Prints numbers 0 to 9 except 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)

{
	int i;
	int j = '9';

	for (i = '0'; i <= j; i++)
	{
		if (i != '2' && i != 4)
			putchar(i);
	}
	putchar('\n');
}
