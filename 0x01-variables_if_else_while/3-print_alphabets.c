#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char j;

	for (j = 'z'; i <= j; i++)
	{
		putchar(i);
	}
	char k = 'A';
	char l;

	for (l = 'Z'; k < l; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
