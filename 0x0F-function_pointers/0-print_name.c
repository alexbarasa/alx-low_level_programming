#include <stdio.h>
/**
 * print_name - Prints the given name
 *
 * @name: Pointer to a name
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	putchar('\n');
}
