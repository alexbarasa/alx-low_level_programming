#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 Not Successful
 */
int main(void)
{
	const char s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, "...messag...", 59);
	return (1);
}
