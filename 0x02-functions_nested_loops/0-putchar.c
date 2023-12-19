#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *a = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{
		putchar(a[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
