#include <stdio.h>
/**
 * add - Adds two integers
 * @a: Integer
 * @b: Integer
 * Return: Sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - Subtracts b from a
 * @a: Integer
 * @b: Integer
 * Return: Difference between a and b
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Multiplies a and b
 * @a: Integer
 * @b: Integer
 * Return: Product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - Divides a by b
 * @a: Integer
 * @b: Integer
 * Return: Division of a and b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - Modulus division of a and b
 * @a: Integer
 * @b: Integer
 * Return: Modulus of a and b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
