#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char k = 'A';
	char j;
	char l;

	for (j = 'z'; i <= j; i++)
	{
		putchar(i);
	}
	for (l = 'Z'; k <= l; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
