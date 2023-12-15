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
	char *mes = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, "...mes...", 59);
	return (1);
}
