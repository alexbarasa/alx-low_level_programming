#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char j = 'z';

	for (char k = i; k < j; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
