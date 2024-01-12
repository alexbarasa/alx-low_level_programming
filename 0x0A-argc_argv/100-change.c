#include <stdio.h>
int _atoi(char *s);
void print_num(int num);
/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int cents, nickels, dimes, pennies, quarters;

	quarters = nickels = dimes = pennies = 0;
	if (argc != 2)
	{
		char *e = "Error";

		while (*e != '\0')
		{
			putchar(*e);
			e++;
		}
		putchar('\n');
		return (1);
	}
	cents = _atoi(argv[1]);
	if (cents < 0)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
	while (cents >= 25)
	{
		cents -= 25;
		quarters++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		dimes++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		nickels++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		pennies++;
	}
	print_num(quarters + dimes + nickels + pennies);
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
/**
 * print_num - Prints the given number
 *
 * @num: Integer
 * Return: Given integer
 */
void print_num(int num)
{
	int div, digit, leadingZero;

	leadingZero = 1;
	div = 10000;
	while (div > 0)
	{
		digit = num / div;
		if (digit > 0 || !leadingZero)
		{
			putchar('0' + digit);
			leadingZero = 0;
		}
		num %= div;
		div /= 10;
	}
	if (leadingZero)
	{
		putchar('0');
	}
	putchar('\n');

}
