#include <stdio.h>
/**
 * print_binary - Converts unsigned integer to binary and prints it
 *
 * @n: Unsigned long integer
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8 - 1;
	int i;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (((n >> bits) & 1) == 0)
		bits--;
	for (i = bits; i >= 0; i--)
	{
		putchar(((n >> i) & 1) ? '1' : '0');
	}
}
