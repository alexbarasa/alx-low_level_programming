#include <stdio.h>
int _atoi(char *s);
/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, product, count, num;
	int digits[10];

	product = 1;
	count = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product *= _atoi(argv[i]);
			count++;
		}
	}
	if (count == 0)
	{
		char *e = "Error";

		while (*e != '\0')
		{
			putchar(*e);
			e++;
		}
	}
	else
	{
		if (product < 0)
		{
			putchar('-');
			product = -product;
		}
		num = 0;
		while (product > 0)
		{
			digits[num++] =  product % 10;
			product /= 10;
		}
		for (i = num - 1; i >= 0; i--)
		{
			putchar('0' + digits[i]);
		}
	}
	putchar('\n');
	return (0);
}
/**
 * _atoi - Changes a string digit to integer
 * @s: String pointer
 * Return: converted string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}

