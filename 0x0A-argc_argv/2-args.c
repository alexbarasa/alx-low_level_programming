#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int count, char_count;

	if (argc >= 1)
	{
		for (count = 0; count < argc; count++)
		{
			for (char_count = 0; argv[count][char_count] != '\0'; char_count++)
			{
				putchar(argv[count][char_count]);
			}
			putchar('\n');
		}
	}
	return (0);
}
