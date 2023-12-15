#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	for (char j = 'z'; i < j; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
