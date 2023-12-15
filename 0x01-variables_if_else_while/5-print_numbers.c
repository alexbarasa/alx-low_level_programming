#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 10;

	while (i < j)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
