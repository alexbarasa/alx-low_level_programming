#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int count = 0;
	*argv = *argv;

	for (i = 1; i < argc; i++)
	{
		count++;
	}
	if (count == 0)
		putchar('0');
	else
	{
		while (count > 0)
		{
			putchar('0' + count % 10);
			count /= 10;
		}
	}
	putchar('\n');
	return (0);
}
