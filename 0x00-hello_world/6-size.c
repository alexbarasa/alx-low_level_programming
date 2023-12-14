#include <stdio.h>
#include <float.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	printf("size of char %lu byte(s)\n", sizeof(char));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
