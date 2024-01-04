#include <stdio.h>
/**
 * reverse_array - Reverses a given array
 *
 * @a: Integer pointer
 * @n: Integer
 * Return: Null
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int tmp;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
