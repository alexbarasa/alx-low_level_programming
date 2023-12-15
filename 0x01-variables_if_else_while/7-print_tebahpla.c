#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'z';
	char j;

	for (j = 'a'; i >= j; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
