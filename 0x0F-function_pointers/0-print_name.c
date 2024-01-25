#include <stdio.h>
#include <stddef.h>
/**
 * print_name - Prints the given name
 *
 * @name: Pointer to a name
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
