#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j = 10;

	for (i = 0; i < j; i++)
	{
		putchar('0' + i);

		if (i < j - 1);
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
