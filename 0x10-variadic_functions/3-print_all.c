#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_all - Prints Char, int, float, double and string
 *
 * @format: List of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	char c;
	int i;
        int j, first;
	float f;

	va_start(args, format);
	first = 1;
	j = 0;
	while (format && format[j])
	{
		if (!first)
			printf(",");
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("%s", "(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		first = 0;
		j++;
	}
	va_end(args);
	printf("\n");
}
