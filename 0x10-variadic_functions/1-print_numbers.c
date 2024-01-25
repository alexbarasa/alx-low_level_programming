#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - Prints the numbers passed then a new line
 *
 * @separator: Pointer to the symbol to separate numbers
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const int n, ...)
{
	va_list args;
	int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
