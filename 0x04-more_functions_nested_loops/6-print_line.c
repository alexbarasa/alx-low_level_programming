#include <stdio.h>
/**
 * print_line - Prints a straight line
 * @n: Integer
 * Return: None
 */
void print_line(int n)
{
	int i, j;

	j = n; 
	for (i = 0; i < j; i++)
	{
		putchar('-');
	}
	putchar('\n');
}
