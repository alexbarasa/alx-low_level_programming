#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - Prints given strings or (nil) when no string is passed
 * followed by a new line
 *
 * @separator: Separates the printed strings
 * @n: The strings to be passed into the function
 */
void print_strings(const char *separator, const int n, ...)
{
	va_list args;
	int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
