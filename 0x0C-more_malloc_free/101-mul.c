#include <stdio.h>
#include <stdlib.h>
void print_error_exit(void);
int _strlen(char *s);
int _isdigit(char *c);
void mul(char *num1, char *num2);
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
	if (argc != 3)
		print_error_exit();
	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
		print_error_exit();
	mul(argv[1], argv[2]);
	return (0);
}
/**
 * mul - Calculates the product of two arguments
 * if they are integers
 *
 * @num1: Character pointer
 * @num2: Character pointer
 * Return: None
 */
void mul(char *num1, char *num2)
{
	int len1, len2, result_size, carry, i, j, start_index, digit1, digit2, tmp;
	int *result;

	carry = 0;
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	result_size = len1 + len2;
	result = malloc(result_size * sizeof(int));
	for (i = 0; i < result_size; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';
			tmp = digit1 * digit2 + result[i + j + 1] + carry;
			result[i + j + 1] = tmp % 10;
			carry = tmp / 10;
		}
		result[i] += carry;
	}
	start_index = 0;
	while (start_index < result_size - 1 && result[start_index] == 0)
		start_index++;
	for (i = start_index; i < result_size; i++)
		putchar(result[i] + '0');
	putchar('\n');
}
/**
 * _isdigit - Checks the uppercase alphabets
 * @c: Integer
 * Return: 1 or 0
 */
int _isdigit(char *c)
{
	while (*c != '\0')
	{
		if (*c < '0' || *c > '9')
			return (0);
		c++;
	}
	return (1);
}
/**
 * _strlen - Calculates the length of a string
 *
 * @s: Character pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * print_error_exit - Prints error and exits with a value of 98
 *
 * Return: None
 */
void print_error_exit(void)
{
	char *error = "Error";

	while (*error != '\0')
	{
		putchar(*error);
		error++;
	}
	putchar('\n');
	exit(98);
}
