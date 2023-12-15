#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int min;
	int max = 10;
	char i;
	char j = 'f';

	for (min = 0; min < max; min++)
	{
		putchar('0' + min);
	}
	for (i = 'a'; i <= j; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
