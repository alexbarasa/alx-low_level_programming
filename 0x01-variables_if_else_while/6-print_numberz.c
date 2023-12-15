#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int max = 10;
	int min;

	for (min = 0; min < max; min++)
	{
		putchar('0' + min);
	}
	putchar('\n');
	return (0);
}
