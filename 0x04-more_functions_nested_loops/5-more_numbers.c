#include <stdio.h>
/**
 * more_numbers - Prints numbers from 0-14 ten times
 *
 * Return: None.
 */
void more_numbers(void)
{
	int i, k;
	int j = 14;

	k = 0;
	while (k < 10)
	{
		for (i = 0; i <= j; i++)
		{
			if (i < 10)
			{
				putchar(i + '0');
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}
		}
		putchar('\n');
		k++;
	}
}
