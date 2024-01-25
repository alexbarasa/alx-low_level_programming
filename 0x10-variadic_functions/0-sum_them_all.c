#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Adds all the numbers and returns the sum.
 *
 * @n: Argument to count how many aguments are passed to the function
 * Return: Computed sum.
 */
int sum_them_all(const int n, ...)
{
	va_list args;
	int i, sum;

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
